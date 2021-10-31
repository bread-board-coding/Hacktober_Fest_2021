#include <iostream>
#include <string>
using namespace std;

int main(){
	
	 string s;
	 
	 cin>>s;
	 
	 for (int i=0;i<s.size();i++){
	 	
	 	s[i]=towlower(s[i]);
	 	
		if (s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'&& s[i]!='y')
		{
	 		cout<<"."<<s[i];             //if we use == and || instead of != and &&,
	 		                            //the code written inside will interchange!!!
			 
		}
		 
	    else
		{ 
		   continue; 
		}
	 
	 
	                             }
        }
	 