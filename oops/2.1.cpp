//////////////////////////////////////////////////
//              initializer list
//////////////////////////////////////////////////
#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public: // initializer list method
    Point() : x(0), y(0)
    { //member_name(value with which you want to initialize it )
    }
    Point(int x1, int y1) : x(x1), y(y1)
    {
    }
    void print()
    {
        cout << "x : " << x << " y : " << y << endl;
    }
};
int main()
{
    Point P1, P2(10, 12);
    P1.print();
    P2.print();
    Point *ptr = new Point(5, 15); // dynamically allocation (heap)
    ptr->print();
    Point *p = &P1;
    p->print();
    return 0;
}
//  note -
// Point():x(0)
// {
//     y=0;

// }
// this is also valid and same goes for parameterised constructor

// note -
//  so there are two ways to initialise 1> normal constructor way 2>initialiser list
//  always prefer initialiser list . (reason explained in next file) in short the reason is performance