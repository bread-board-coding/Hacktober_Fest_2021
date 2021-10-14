// virtual keyword
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print() { cout << "Base" << endl; }
};
class Derived : public Base
{
public:
    void print() override
    { // override keyword - it is used to increase readibility as from this it is very clear that this function is overriding
        // a virtual function in base class
        // it is also used to avoid errors like if i wrie - void Print() override - it will produce an error as there is no
        //  virtual function Print() in base class .
        cout << "Derived" << endl;
    }
};
// note in oop  terms this is called function overriding - when you have the same derived
// class function with same name and signature as that of base class function and base class
// function is virtual then it is called function overriding.
// it is different from function overloading -funtion overloading is an example of compile time polymorphism
// whereas function overriding is an example of runtime polymorphism.
int main()
{
    Base b;
    Derived d;
    b.print();
    d.print();
    Base *ptr = &d;
    ptr->print();
    return 0;
}
// output -
// Base
// Derived
// Derived

// how virtual functions work internaly ?
// c++ standards doesnot say anything about how virtual functions works but this is how most
// of the compilers work with virtual function.
// compilers use two things - vptr and vtable
// vptr which is maintained wuth every object(containing virtual function and its derived classes) and
// vtable which is there for every class(containing virtual function and its derived classes).
// vptr points to ctable
// when you create an object your compiler adds some code to the constructor this code
// sets vptr to the vtable of this class . vtable of a class stores addresses of all the
// virtual addresses present in the class .
// so when you make call to an overridden function your complier goes to the vptr of that
// objects using it to find vtable of the class and using that vtable finds the address of the
// virtual function.

// note - virtual function require extra work to be done by the compiler , extra CPU cycles
// are needed but you need not to worry about this (unless an until in a very strict time environment)

// READ course gfg notes for more info on vptr and vtable