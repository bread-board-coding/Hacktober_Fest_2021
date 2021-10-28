#include <iostream>
using namespace std;

struct mystack
{
    int *arr;
    int cap;
    int top;

    mystack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x)
    {
        top++;
        arr[top] = x;
    }

    int pop()
    {
        int res = arr[top];
        top--;
        return res;
    }

    int peek()
    {
        return arr[top];
    }

    int size()
    {
        return (top + 1);
    }

    // can use bool function like this only no need to put the false condition in the else part
    bool isempty()
    {
        return (top == -1);
    }
};
int main(void)
{
    mystack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isempty() << endl;
    return 0;
}
