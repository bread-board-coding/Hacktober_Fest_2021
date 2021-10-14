#include<iostream>  
using namespace std;
class Base{
    public:
    void print(){cout<<"Base"<<endl;}
};
class Derived:public Base{
    public:
    void print(){
        cout<<"Derived"<<endl;
    }
};
int main(){
    Base b;
    Derived d;
    b.print();
    d.print();
    Base*ptr=&d;
    ptr->print();
    // output 
    // Base
    // Derived 
    // Base
    // it is the same in case of references in 5.virtual functions.cpp
    // Base&r=d; it will also produce the above output
    // note - ideally it should print  base derived derived because ptr it pointing to derived 
    // class object d. but this is not the case because here the type of pointer is Base . 
    // so to chieve that the type of pointer should not decide the function to be called
    //  but rather the object to which the pointer is pointing should decide  
    //to resolve this we use virtual keyword 
    // 
    return 0;
}