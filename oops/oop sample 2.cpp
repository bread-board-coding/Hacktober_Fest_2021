#include <iostream>
using namespace std;
class Sample
{
public:
    int x;
    int y;
    Sample(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};
int main()
{
    Sample S1(1, 2);
    Sample *ptr;
    ptr = &S1;
    cout << ptr << endl;
    // cout << *ptr; you cant derefence a ptr to a class/structure

    return 0;
}