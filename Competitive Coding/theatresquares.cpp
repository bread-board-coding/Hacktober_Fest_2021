#include <iostream>
using namespace std;

int main(){
	
long long int m,n,a,x,y,z;
	cin>>m>>n>>a;
	
	if(m%a==0){
		x=m/a;
	}
	else{
		x=m/a +1;
	}
	
	if(n%a==0){
		y=n/a;
	}
	else{
		y=n/a +1;
	}
	
	z=x*y;
	cout<<z<<endl;
	
	
	
}