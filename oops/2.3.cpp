//////////////////////////////////////////////
//       with initialiser list
//////////////////////////////////////////////

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
    Main() : t(10) // Main(): t() to initialise with default constructor
    {
    }
};
int main()
{
    Main m;
    return 0;
}
// o/p  parameterised
// this is the performance advantaage of initialiser list method  . initialization only happens  only one time.