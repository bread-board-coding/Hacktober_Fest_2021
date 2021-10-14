#include <iostream>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int x1, int y1)
    {           // internally compilor converts these lines as :
        x = x1; // this->x=x1;
        y = y1; // this->y=y1;
                // where this is a special pointor pointing to the object on which you have called the function
    }
    // note -
    // Point(int x int y){  // this syntax will cause name_collision ie it a garbage value is assigned because x, y
    //     x=x;            // declared in this function hides the data member x,y
    //     y=y;
    // }

    // this problem is overcomed as
    // Point(int x, int y){
    //     this->x=x;
    //     this->y=y;
    // }
};

// this pointor is also used to chain function

class Game
{
    int x, y;

public:
    Game(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Game &setx(int x) // this is a function with retrun type Game& (as it returns the reference(address of object through this pointer which is of type Game))
    {
        this->x = x;
        // cout<<*this; you cant derefence a ptr to a class/structure ;
        cout << "setx this: " << this << endl;
        return *this; // we use reference to return the same object
    }
    Game &sety(int y)
    {
        this->y = y;
        cout << "sety this: " << this << endl;

        return *this;
    }
    void print()
    {
        cout << "x :  " << x << " y : " << y << endl;
    }
};
int main()
{
    Point P1(10, 20), P2(1, 1);
    Game G(19, 19), G1(1, 1);
    cout << "Using/ Calling G " << endl;
    G.print();
    G.setx(5).sety(6);
    G.print();
    cout << "&G :" << &G << endl;
    cout << "Using/ Calling G1 " << endl;
    G1.print();
    G1.setx(0).sety(0);
    G1.print();
    cout << "&G1 : " << &G1 << endl;
    return 0;
}

// note  -
// Each object of a class recieves it's own copy of data members but it is not same with class function.
// only one copy is allocated and all the objects share this copy .
// so how this magic happens that when i refer to P1 it calls constructor of P1 only .
// when you call a function of an object a special pointor of this object called as this pointor is passed by the compilor
// which refers to the object on which you are calling this function.
// this pointer is only availabe to non- static mambers.
//  this pointer is a constant pointer (if we try to change it , it produces error )

// same happens in cout<<x<<y; here also chaining happes
// actually instertion operator isa function call it prints and then return a reference of ostream object
