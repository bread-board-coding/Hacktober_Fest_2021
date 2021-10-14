//////////////////////////////////////////////////
//             destructor
/////////////////////////////////////////////////
// constructor is called when an object is created whereas as destructor is called when an object is destroyed
//  ie when an object goes out of scope

#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout << "const " << endl;
    }
    ~Test()
    {
        cout << "dest" << endl;
    }
    // note - writing cout statements in const and destructors is not a good practice
};
class Point
{
    int x;

public:
    Point(int i) : x(i)
    {
        cout << "cons called " << x << endl;
    }
    ~Point()
    {
        cout << "destructor called " << x << endl;
    }
};
int main()
{
    {
        Test t1;
    }
    Test t2; //Here the scope of t ends when the main ends as it is declared in main
    cout << "checking order of const and destructor call " << endl;
    Point p1(15), p2(25);
    // output -
    // cons called 15
    // cons called 25
    // destructor called 25
    // destructor called 15

    // destructors are called in reverse order of thei object creation
    return 0;
}

// note- only one destructor is allowed in a class . they dont take / return any argument
// when you do new constructor is called and when you do delete destructor is called
// compiler also provide default destructor but this default destructor will not to take care of dynamically allocated memory
// ie dyanmically allocated memory will not br de-allocated