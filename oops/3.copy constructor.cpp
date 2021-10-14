#include <iostream>
using namespace std;
class Test
{
    int *ptr;
    int num;

public:
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
// note - in this program  no copy constructor is defined but it still works because compiler creates a default copy constructor
// so the question arises why we need to manually create copy constructors -
// this is bescause the default copy constructor performs  shallow copy . look T! and T2 are two separete objects
// they are not connected . the thing is the the default copy constructor blindly copy the address of the dynamically
// allocted memory it doesnot dynamically allocate new memory for ptr in T2,
// if you need deep copy than create your own copy constructor

// note shallow copy works fine with statically allocated members separated memory is allocated