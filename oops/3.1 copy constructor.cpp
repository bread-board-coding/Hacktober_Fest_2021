#include <iostream>
using namespace std;
class Test
{
    int *ptr;
    int num;

public:
    Test(const Test &t)

    {
        int val = *(t.ptr);
        ptr = new int(val);
    }
    Test(int x, int num)
    {
        ptr = new int(x);
        this->num = num;
    }
    void set(int x, int num)
    {
        *ptr = x;
        this->num = num;
    }
    void print()
    {
        cout << *ptr << endl;
        cout << num << endl;
    }
};
int main()
{
    Test T1(10, 1);
    T1.print();
    Test T2(T1); // Test T2= T1 ;  they means the same (copy constructor)
                 // but Test T2;
                 //    T2=T1;  is not a copy constructor call. it simply copies T1 to T2
                 // this wil first call the default constructor of  than it will copy T1 to T2
    T2.set(20, 2);
    cout << "T1.print :";
    T1.print();
    cout << "T2.print :";
    T2.print();

    return 0;
}