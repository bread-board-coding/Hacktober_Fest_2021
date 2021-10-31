
#include <iostream>
using namespace std;

class XYZ;
class ABC
{
    int a;

    public:
    
    void setvalue(int i)
    {     a=i;       }

    friend void MAX(ABC,XYZ);
};

class XYZ
{
    int x;

    public:
    
    void setvalue(int i)
    {     x=i;       }

    friend void MAX(ABC,XYZ);
};

void MAX(ABC m,XYZ n)
{
    if (m.a>n.x)
    {
        cout<<m.a<<" is greater than "<<n.x;
    }
    else
    {
        cout<<n.x<<" is greater than "<<m.a; 
    }
    
    
}

int main()
{
     ABC abc;
     XYZ xyz;
     abc.setvalue(20);
     xyz.setvalue(10);
     cout<<"greatest number is:\n";
     MAX(abc, xyz);


}
