#include <memory>
#include <iostream>
#include <vector>
#include <string>
#include <exception>

using std::vector;
using std::string;

class StrBlobPtr;

class StrBlob {
friend class StrBlobPtr;

public:
    using size_type = vector<string>::size_type;
    friend class StrBlobPtr;

    StrBlobPtr begin();
    StrBlobPtr end();

    StrBlob() : data(std::make_shared<vector<string>>()) {}
    StrBlob(std::initializer_list<string> il)
        : data(std::make_shared<vector<string>>(il))
    {
    }

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const string& t) { data->push_back(t); }
    void pop_back()
    {
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }

    std::string& front()
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }

    std::string& back()
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }

    const std::string& front() const
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const std::string& back() const
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }

private:
    void check(size_type i, const string& msg) const
    {
        if (i >= data->size()) throw std::out_of_range(msg);
    }

    std::shared_ptr<vector<string>> data;
};

class StrBlobPtr {

public:
    StrBlobPtr():curr(0) {}
    StrBlobPtr(StrBlob& a, std::size_t sz=0): wptr(a.data), curr(sz) {}
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
    std::string& deref() const;
    StrBlobPtr& incr();

private:
    std::shared_ptr<std::vector<std::string>> 
        check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

std::string& StrBlobPtr::deref() const {
    auto p = check(curr, "dereference goes beyond end!");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
    check(curr, "dereference goes beyond end!");
    ++curr;
    return *this;
}

std::shared_ptr<std::vector<std::string>> 
StrBlobPtr::check(std::size_t sz, const std::string& msg) const {
    auto ret = wptr.lock();
    if (!ret) {
        throw std::runtime_error("unbound StrBlobPtr!");
    }
    else if (sz >= ret->size()) {
        throw std::out_of_range(msg);
    }
    else {
        return ret;
    }
}

StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end()
{
    return StrBlobPtr(*this, data->size());
}
