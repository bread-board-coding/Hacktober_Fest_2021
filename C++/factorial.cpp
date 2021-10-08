#include<iostream>
using namespace std;
int main(){
	int i, s=1, num;
	cout<<"enter the value of num: ";
	cin>>num;
	for(i=1;i<num;i++){
		s=s*i;
	}
	cout<<"the factorial is: "<<s;
	
}
