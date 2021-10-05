#include<iostream>
using namespace std;
#include "StackUsingLL.cpp"

int main()
{
    stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');
    s.push(70);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.size1()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}


