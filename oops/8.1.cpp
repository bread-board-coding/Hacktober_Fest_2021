#include <iostream>
using namespace std;
class Base
{
public: // here change is made
    int x;
    Base(int a) : x(a) { cout << "base" << endl; }
};
class Derived : public Base
{
private:
    int y;

public:
    Derived(int a, int b) : Base(a), y(b)
    {
        cout << "Derived " << endl;
    }
    void print() { cout << "x : " << x << " y : " << y << endl; }
};
int main()
{
    // Derived d(10);
    Derived d(10, 20);
    d.print();
    cout << d.x; // valid because is now a public member

    return 0;
}
