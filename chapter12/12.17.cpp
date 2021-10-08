
#include <iostream>
#include <string>
#include <memory>

using std::string;
using std::unique_ptr;

int main()
{
    int ix = 1024;
    int *pi = &ix;
    int *pi2 = new int(3070);

    typedef unique_ptr<int> uptr;
    
    //a)
    // uptr p0 (ix);
    
    //b)
    // uptr p1 (pi);
    //c)
    // uptr p3(&ix);

    // d)
    {
        uptr p4(pi2);
    }
    std::cout << *pi2<< '\n';

    // e)
    uptr p5(new int(1060));

    //f )
    // uptr p6(p5.get());

    std::cout << "function body okay" << std::endl;
    return 0;
}