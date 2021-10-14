#include <iostream>
using namespace std;
class Base
{
protected:
    int x;

public:
    Base(int a) : x(a) { cout << "base" << endl; }
};
class Derived : public Base
{
private:
    int y;

public:
    // Derived(int b) : y(b) { cout << "Derived" << endl; } // this line will create a compiler error as this constructor
    // is not calling constructor of base class. since the base class is also a part of derived class so members of the base class
    // should also be initialised . remember when you create the object of a derived class first the constructor of the base class is called
    // then constructor of derived class is called .
    // note -
    // when you yourself (explicitly) dont call the constructor of base class the compiler itself calls the
    //  default constructor of base class. if user doesnt provide a default constructor the compiler creates one .
    // but here base class has a paramemterised constructor so the compiler will not create a default constructor.

    Derived(int a, int b) : Base(a), y(b) { cout << "Derived " << endl; }
    void print() { cout << "x : " << x << " y : " << y << endl; }
};
int main()
{
    // Derived d(10);
    Derived d(10, 20);
    d.print();
    // output
    // base
    // Derived
    // x : 10 y : 20
    return 0;
}
