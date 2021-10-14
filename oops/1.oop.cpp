// oop - object oriented programming is a way to build a program or software
// class - a data type with functions
// object - a variable of class
#include <iostream>
using namespace std;
class Complex
{
private:      // data abstraction - hiding the inner functionality/ hiding background process and showing only which is necessary
    int real; // private data mambers/functions cannot be accessed outside the class
    int imag;

public:
    void print()
    {
        cout << real << "+i" << imag << endl;
    }
    Complex(int x, int y) // constructor function - it is automatically called when an object of class is declared
    {                     // it is used to initialize the object
        real = x;
        imag = y;
    }
};
int main()
{
    Complex C1(10, 15); // declaring  object C1 of class Complex
    C1.print();
    // C1.real = 15; this creates error as real is private member
    return 0;
}
// encapsulation - the process of bundling different data members and function under a single names .
// polymorphism - same name multiple functionalities . it is of two type static and dynamic polymorphism
// static ploymorphism -  already discussed - eg function overloading implements static polymorphism
//   it can also be achieved through default arguments
// dynamic polymorphism -  we discuss later . the basic idea is you have a reference of base class which can refer to derived class object
// virtual functions - discussed later.
// inheritance - to inherit functionalities from base class.