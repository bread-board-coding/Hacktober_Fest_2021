// always use initializer list method wherever possible because it is efficient . as when you use constructor body
// initialization method , the data members are initalised twice .
// following program show this -

// program without initialiser list
#include <iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout << "Default " << endl;
    }
    Test(int x)
    {
        cout << "Parameterised " << endl;
    }
};
class Main
{
public:
    Test t;
    Main()
    {
        t = Test(10); // initislizing t member(object of class Test) by calling Test() constructor explicitly
    }
};
int main()
{
    Main m;
    return 0;
}
// o/p   dafault
//       parameterised
// because Main constructor body is executed after calling the default constructor of Test class
// so this is how constructors work first no matter what, as you declare data members  the default constructor
// (if not manually defined by programmer the complier creates a constructor that takes no parameter wtih empty body)
// is invoke than the the
// body of respective constructor is executed in case of constructor body intialization method.
// this is why the object t is initialised twice one with default and then with the values initialised in the constructor body
// which is not optimal case.
//  but this is not the case with initialiser list .