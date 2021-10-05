#include<iostream>
#include"BinarySearchTree.h"
using namespace std;

int main()
{
    BST<int> t;
    t.insert(20);
    t.insert(10);
    t.insert(12);
    t.insert(14);
    t.insert(13);
    t.print();
    cout<<t.hasData(12)<<endl;
    cout<<t.hasData(15)<<endl;
    t.remove(20);
    cout<<t.hasData(20)<<endl;
    t.remove(12);
    t.print();
    return 0;
}