#include<iostream>
using namespace std;
int main(){
	int i,m,a[20],k=0,j=0,even[20],odd[20];
	cout<<"enter the size of array: ";
	cin>>m;
	for(i=0;i<m;i++){
		cout<<"enter the elements of array: "<<endl;
		cin>>a[i];
	}
	cout<<"the array is: "<<endl;
	for(i=0;i<m;i++){
		cout<<" "<<a[i]<<" ";
	}
	
	for(i=0;i<m;i++){
		if(a[i]%2==0){
			even[j]=a[i];
			j++;
		}
		else{
			odd[k]=a[i];
			k++;
		}
	}
	cout<<"\neven elements are: ";
	for(i=0;i<j;i++){
		cout<<" "<<even[i]<<" ";
	}
	cout<<"\nodd elements are: ";
	for(i=0;i<k;i++){
		cout<<" "<<odd[i]<<" ";
	}
}
