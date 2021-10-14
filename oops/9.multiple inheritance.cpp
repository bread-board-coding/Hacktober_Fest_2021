#include <iostream>
using namespace std;
class A
{
public:
    int x;
    A()
    {
        cout << "A" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "B" << endl;
    }
};
class C : public A
{
public:
    C()
    {
        cout << "C" << endl;
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout << "D" << endl;
    }
} d;
int main()
{

    // cout << d.x;
    return 0;
}