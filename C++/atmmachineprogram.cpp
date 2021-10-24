
#include< iostream>
using namespace std;
void printstar(char ch , int n);
double balance1;
void main()
{
system("color A0");
cout<<"\n\t\t    ========================================="<< endl;
cout<<"\t\t    ========================================="<< endl;
cout<<"\t\t          ||   WELCOME TO MY PROJECT   ||"<< endl;
cout<<"\t\t    ========================================="<< endl;
cout<<"\t\t    ========================================\n\n"<< endl;
printstar('*',80);
int password;
int pincode ;
cout<<"      **************  PASSWORD FOR ALI      IS 5555   **************\n";
cout<<"      **************  PASSWORD FOR SAJOO    IS 6666   ************** \n";
cout<<"      **************  PASSWORD FOR IJAZ     IS 7777   ************** \n";
cout<<"      **************  PASSWORD FOR TOUSEEF  IS 8888   ************** \n\n\n";
printstar('&',80);
for(int i=1;i<=10;i++)
{
if(i==2 || i==3 || i==4 || i==5 || i==6 || i==7 || i==8 || i==9 || i==10)
{
cout<<"\n\nWELCOME AGAIN  \n\t\t\t\tMAIN PAGE \n";
}
cout<<"PLEASE ENTER THE PINCODE\n";
cin>>pincode;
system("cls");
if(pincode == 1111)
{
cout<<"\n WELCOME ALI \n";
for (int i=0;i<3;i++)
{
cout <<"enter password:\n";
cin>>password;
double balance = 10000;
balance1=balance;
if (password==5555)
{
for(int i=1;i<=10;i++)
{
double withdraw, deposit;
int option;
cout<<"\n";
if(i==1)
{
cout<<"\t\t *** Automated Teller Machine ***"<< endl;
cout<<"\nChoose a Transaction:\n\n";
}
printstar('%',80);
cout<<"     MAIN SCREEN    \n";
cout<<"[1] Inquire Balance \n";
cout<<"[2] Withdraw \n";
cout<<"[3] Deposit \n";
cout<<"[4] Quit \n";
cout<<"\n";
cout<<"Enter Option:";
cin>>option;
switch(option)
{
case 1:
cout<<"\n[[[% BALANCE INQUIRY %]]]\n";
cout<<"\n Your current balance is RS "<< balance1<< endl;
continue;
case 2:
cout<<"\n[[[% WITHDRAW %]]]\n";
cout<<"Enter amount in Rupees: ";
cin>>withdraw;
balance1 = balance1 - withdraw;
                cout<<"You withdrew RS: "<< withdraw<< endl;
cout<<"Your remaining balance is RS: "<< balance1<< endl;
continue;
case 3:
cout<<"\n[[[% DEPOSIT %]]]\n";
cout<<"Enter amount in RS: ";
cin>>deposit;
balance1 = balance1 + deposit;
cout<<"You deposited RS: "<< deposit<< endl;
cout<<"Your new balance is RS: "<< balance1<< endl;
continue;
case 4:
cout<<"\n***[[[% EXIT MODE %]]]***\n";
system("cls");
break;
default:
cout<<"\n That is an invalid option Plz enter correct option: \n";
continue;
}
break;
}
break;
}
else if(i==2)
{
cout<<"\nCard is captured\n";
}
else
cout<<"Pls try again!!!\n";
}}
if(pincode == 2222)
{
cout<<"\n WELCOME SAJO \n";
for (int i=0;i<3;i++)
{
cout <<"enter password:\n";
cin>>password;
double balance = 52000;
balance1=balance;
if (password==6666)
{
for(int i=1;i<=10;i++)
{

double withdraw, deposit;
int option;
cout<<"\n";
if(i==1)
{

cout<<"*** Automated Teller Machine***"<< endl;
cout<<"Choose a Transaction:\n";
cout<<"\n";
}
cout<<"     MAIN SCREEN    \n";
cout<<"[1] Inquire Balance \n";
cout<<"[2] Withdraw \n";
cout<<"[3] Deposit \n";
cout<<"[4] Quit \n";
cout<<"\n";
cout<<"Enter Option:";
cin>>option;

switch(option)
{
case 1:
cout<<"\n[[[% BALANCE INQUIRY %]]]\n";
cout<<"\n Your current balance is RS: "<< balance1<< endl;
continue;
case 2:
cout<<"\n[[[% WITHDRAW %]]]\n";
cout<<"Enter amount RS: ";
cin>>withdraw;
balance1 = balance1 - withdraw;
cout<<"You withdrew RS: "<< withdraw<< endl;
cout<<"Your remaining balance is RS: "<< balance1<< endl;
continue;
case 3:
cout<<"\n[[[% DEPOSIT %]]]\n";
cout<<"Enter amount RS: ";
cin>>deposit;
balance1 = balance1 + deposit;
cout<<"You deposited RS"<< deposit<< endl;
cout<<"Your new balance is RS: "<< balance1<< endl;
continue;
case 4:
cout<<"\n***[[[EXIT MODE]]]***\n";
break;
default:
cout<<"\n That is an invalid option Plz enter correct option:\n";
continue;
}
break;
}
break;
}
if(i==2)
{
cout<<"\nCard is captured\n";
}
else
cout<<"Pls try again!!!\n";
}
}
else if(pincode == 3333)
{
cout<<"\n Wellcome Ejaz \n";
for (int i=0;i<3;i++)
{
cout <<"Please enter password:\n";
cin>>password;
double balance = 10000;
balance1=balance;
if (password==7777)
{
for(int i=1;i<=10;i++)
{
double withdraw, deposit;
int option;
cout<<"\n";
if(i==1)
{
cout<<"*** Automated Teller Machine***"<< endl;
cout<<"Choose a Transaction:\n";
cout<<"\n";
}
cout<<"     MAIN SCREEN    \n";
cout<<"[1] Inquire Balance \n";
cout<<"[2] Withdraw \n";
cout<<"[3] Deposit \n";
cout<<"[4] Quit \n";
cout<<"\n";
cout<<"Enter Option:";
cin>>option;
switch(option)
{
case 1:
cout<<"\n[[[% BALANCE INQUIRY %]]]\n";
cout<<"\n Your current balance is RS: "<< balance1<< endl;
continue;
case 2:
cout<<"\n[[[% WITHDRAW %]]]\n";
cout<<"Enter amount in RS: ";
cin>>withdraw;
balance1 = balance1 - withdraw;
cout<<"You withdrew RS: "<< withdraw<< endl;
cout<<"Your remaining balance is RS: "<<  balance1<< endl;
continue;
case 3:
cout<<"\n[[[% DEPOSIT %]]]\n";
cout<<"Enter amount RS: ";
cin>>deposit;
balance1 = balance1 + deposit;
cout<<"You deposited RS: "<< deposit<< endl;
cout<<"Your new balance is RS: "<< balance1<< endl;
continue;
case 4:
cout<<"\n***[[[% EXIT MODE %]]]***\n";
break;
default:
cout<<"\n That is an invalid option Plz enter corrct option: \n";
continue;	}
break;
}
break;
}

if(i==2)
{
cout<<"\nCard is captured\n";
}
else
cout<<"Pls try again!!!\n";
}
}
else if(pincode == 4444)
{
cout<<"\n WELCOME TOUSEEF \n";
for (int i=0;i<3;i++)
{
cout <<"Please enter password:\n";
cin>>password;
double balance = 10000;
balance1=balance;
if (password==8888)
{
for(int i=1;i<=10;i++)
{
double withdraw, deposit;
int option;
cout<<"\n";
if(i==1)
{
cout<<"*** Automated Teller Machine***"<< endl;
cout<<"Choose a Transaction:\n";
cout<<"\n";
}
cout<<"     MAIN SCREEN    \n";
cout<<"[1] Inquire Balance \n";
cout<<"[2] Withdraw \n";
cout<<"[3] Deposit \n";
cout<<"[4] Quit \n";
cout<<"\n";
cout<<"Enter Option:";
cin>>option;
switch(option)
        {
case 1:
cout<<"\n[[[% BALANCE INQUIRY %]]]\n";
cout<<"\n Your current balance is "<< balance1<< endl;
continue;
case 2:
cout<<"\n[[[% WITHDRAW %]]]\n";
cout<<"Enter amount in RS: ";
cin>>withdraw;
balance1 = balance1 - withdraw;
cout<<"You withdrew RS: "<< withdraw<< endl;
cout<<"Your remaining balance is RS: "<< balance1<< endl;
continue;
case 3:
cout<<"\n[[[% DEPOSIT %]]]\n";
cout<<"Enter amount in RS: ";
cin>>deposit;
balance1 = balance1 + deposit;
cout<<"You deposited RS: "<< deposit<< endl;
cout<<"Your new balance is RS: "<<  balance1<< endl;
continue;
case 4:
cout<<"\n***[[[EXIT MODE]]]***\n";
break;
default:
cout<<"\n That is an invalid option Plz enter correct option:   \n";
continue;
}
break;
}
break;
}
if(i==2)
{
cout<<"\nCard is captured\n";
}
else
cout<<"Pls try again!!!\n";

}}}}
void printstar(char ch , int n)
{
for(int i=1;i<=n;i++)
{
cout<< ch;
}
cout<<"\n";
}



 
