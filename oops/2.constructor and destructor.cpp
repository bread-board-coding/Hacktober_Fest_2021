#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;

public:
    Point() // default constructor
    {
        x = 0;
        y = 0;
    }
    Point(int x, int y) // Point(int x,int y) by this garbage value is showing in x and y.
    {                   // parametrized constructor . to overcome this problem you can use this pointer
                        // or simply can change the parameter's name.
        this->x = x;
        this->y = y;
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
//  note - constructor does not have return type

// // note - if i dont create constructor manually(like Point( ) and Point(int x1,int y1) )
// then complier willl automatically create a constructor with empyty body like
// Point(){

// }
// then in such case the data members of the Point class will have garbage value / random value