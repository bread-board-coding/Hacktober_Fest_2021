#include<iostream>
using namespace std;
int main(){
	int i, j, m, a[20];
	cout<<"enter the size of array: ";
	cin>>m;
	for(i=0;i<m;i++){
		cout<<"\nenter the array elements: ";
		cin>>a[i];
		
	}
	for(i=0;i<m;i++){
		cout<<"the stored array is: "<<a[i];
	}
	cout<<"the duplicates are: "<<endl;
	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
			if(a[j]==a[i]){
				cout<<a[i];
			}
		}
		cout<<"\n";
	}
}
