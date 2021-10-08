#include<iostream>
using namespace std;
int main(){

int i, j, size, a[20],temp;
cout<<"enter the size of array: ";
cin>>size;
for(i=0;i<size;i++){
	cout<<"\nenter the array elements: ";
	cin>>a[i];
}
cout<<"the unsorted array is: ";
for(i=0;i<size;i++){
	cout<<" "<<a[i]<<" ";
	
}
for(i=0;i<size;i++){
	for(j=0;j<size-i-1;j++){
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
cout<<"\nthe sorted array is: ";
for(j=size-1;j>=0;j--){
	cout<<" "<<a[j]<<" ";
}
cout<<"\n";
return 0;
}
