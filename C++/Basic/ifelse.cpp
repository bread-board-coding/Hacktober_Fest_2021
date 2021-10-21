#include<iostream>
using namespace std;

int main(){

    int savings;
    cout<<"HOW MUCH CASH DO YOU HAVE?\n";
    cin>>savings;

    if(savings>10000){
        cout<<"BUY A NEW PHONE";
    }
   
    else if(savings<1000){
        cout<<"ORDER FOOD";
    }

    else{
        cout<<"GO FOR SHOPPING\n";
        
        if(savings<5000){
            cout<<"SHOP FROM H&M";
        }
        else
            cout<<"SHOP FROM BURBERRY";

    } 
            return 0;
}