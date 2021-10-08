#include <iostream>
#include <vector>

class Debug {
public:
    constexpr Debug(bool bugstate): hw(bugstate), io(bugstate), other(bugstate){}
    constexpr Debug(bool r, bool i, bool o) : hw(r), io(i), other(o) {}

    constexpr bool any() const{ return hw || io || other; }
    void set_hw(bool b) { hw = b; }
    void set_io(bool b) { io = b; }
    void set_other(bool b) { other = b; }

private:
    bool hw;
    bool io;
    bool other;
};