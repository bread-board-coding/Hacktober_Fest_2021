#include<iostream>
using namespace std;
class Base{
    public:
    int x=1;
    int y=10;
    virtual void print(){
        cout<<"base "<<endl;
    }
};
class Derived:public Base{
    public:
    int a= 20;
    int b= 40;
    void print(){cout<<"Derived"<<endl;}
};
int main(){ 
    Base* ptr=new Derived;
    cout<<"ptr :"<<ptr<<endl;
    cout<<ptr->x<<" "<<ptr->y<<endl;
    Derived D;
    Base&b=D; // creates a reference b of base class referring to a derived class 
    //cout<<b.a; // this produce error although here it is referring to d but output is based on reference type ie Base 
    // ie -
    cout<<b.x<<endl; //is valid
    // to resolve this we have concept of virtual functions  
    // creating a reference object 
    // Base ob;
    // Base&b=ob;
    // cout<<b.x<<b.y;
    b.print();
    delete ptr;
    return 0;
}