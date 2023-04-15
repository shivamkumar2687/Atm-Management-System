#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
using namespace std;
class LoginPage{
    public:
    void login()               //function for login
{
int count,ch,bal,bal1,witd,dep;
string user,pass,u,p,nL,nF,dir,pin;
system("cls");
cout<<"Please enter the following details\n"<<endl;
cout<<"ATM ID (or) USERNAME :";
cin>>user;
cout<<"\nEnter PIN :";
cin>>pass;
 ifstream input;
dir=user+".txt";

 input.open(dir.c_str());
while(input>>u>>p>>nF>>bal)
{
if(u==user && p==pass)
        
{
count=1;
system("cls");
}
}
input.close();
if(count==1)
{
    cout<<"\n\n        Please wait.....           "          ;
    Sleep(3000);
    system("cls");
cout<<"\nHello "<<nF<<"                   ATM Id : "<<user<<endl;
cout<<"\n\n             LOGIN SUCESS\n";
cout<<"\n1. Withdrwal\n2. Deposit\n3. View Bal\n4. Change Pin\n5. Exit"<<endl; 
cout<<"\n Enter Your Choice : ";
cin>>ch;
if(ch==1){                                   //for withdrawl
        system("cls");
        cout<<"Enter Withdraw Amount : ";
        cin>>witd;
       if(witd>bal){
            cout<<"\nInsufficient Balance !"<<endl;
        }
        else{
            cout<<"\n\nPlease wait.....While your transaction is being processed.";
           Sleep(3000);
        system("cls");
    cout<<"\n\nYour acoount is sucessfully debited "<<witd<<endl;
    cout<<"\nBefore Withdrawl your Balance is : "<<bal;
        witd=bal-witd;
        ofstream input;
        input.open(dir.c_str());
        input<<u<<endl<<p<<endl<<nF<<endl<<witd<<endl;
        input.close();
        cout<<"\n\n Transaction Sucessful.\n"<<endl;
        cout<<"Now Available balance in your account is : "<<witd<<"\n"<<endl;
        cout<<"\n\n --> After 8 second you automatically return to Main Menu....";
    Sleep(8000);
    system("cls");
        }
    }
else if(ch==2){                    //for deposit
    system("cls");
   cout<<"\nEnter Deposit Amount : ";
        cin>>dep;
        cout<<"\n\nPlease wait....While your transaction is being processed.";
    Sleep(3000);
    system("cls");
    cout<<"\n\nYour acoount is sucessfully credited "<<dep<<endl;
      cout<<"\nBefore deposit your Balance is : "<<bal;
        dep=bal+dep;
        ofstream input;
        input.open(dir.c_str());
        input<<u<<endl<<p<<endl<<nF<<endl<<dep<<endl;
      input.close();
    cout<<"\n\n Transaction Sucessful."<<endl;
     cout<<"\nNow Available balance in your account is : "<<dep<<"\n"<<endl;
       cout<<"\n\n --> After 8 second you automatically return to Main Menu....";
       Sleep(8000);
    system("cls");
}
else if(ch==3){                        //for view balance
    system("cls");
 cout<<"\n\nPlease wait....While your transaction is being processed.";
    Sleep(3000);
    system("cls");
cout<<"\n\nAvailable Balance in your Account is : "<<bal<<"\n"<<endl;
input.close();
  cout<<"\n\n --> After 8 second you automatically return to Main Menu....";
    Sleep(8000);
    system("cls");
}
else if(ch==4){                     //for pin change
    system("cls");
        cout<<"Enter New Pin : ";
        cin>>pin;
    ofstream input;
        input.open(dir.c_str());
        input<<u<<endl<<pin<<endl<<nF<<endl<<bal<<endl;
      input.close();
      system("cls");
      cout<<"\n\nPlease Wait.....";
    Sleep(3000);
    system("cls");
      cout<<"\n\nYour Pin is sucessfully change.\n"<<endl;
    cout<<"\n\n --> After 8 second you automatically return to Main Menu....";
        Sleep(8000);
    system("cls");
}    
else if(ch==5){
    cin.get();
system("cls");
} 
else{
    system("cls");
    cout<<"\n\nSorry, You have choosen Wrong Input.\n"<<endl;
      cout<<"\n\n --> After 8 second you automatically return to Main Menu....";
        Sleep(8000);
    system("cls");
}
}     
else
{
cout<<"\nLOGIN ERROR\nPlease check your ATM ID (or) username and PIN \n";                
}       
}
void registr()            //function for registration
{
string reguser,regpass,nameF,nameL,rp,dir;
int bal;
system("cls");
cout<<"Enter the ATM ID (or) username :";
cin>>reguser;
cout<<"\nEnter the Pin :";
cin>>regpass;
ifstream reg;
dir=reguser+".txt";
reg.open(dir.c_str());
if(reg.is_open()){
cout<<"\nSorry, This ATM ID (or) username is already exists.Please try again or contact your nearest branch.\n";
}
else{
cout<<"\nEnter your First Name : ";
cin>>nameF;
cout<<"\nEnter your Last Name : ";
cin>>nameL;
cout<<"\nEnter Initial Balance : ";
cin>>bal;
//cin>>nameL;
    ofstream newreg;
    dir=reguser+".txt";
newreg.open(dir.c_str());
newreg<<reguser<<endl<<regpass<<endl<<nameF<<endl<<bal<<endl;
system("cls");
cout<<"Please wait.......";
Sleep(3000);
system("cls");
cout<<"\nCongrutulations ! Your ATM ID is Registered Sucessfully\n";  
cout<<"Kindly login to do your Transaction.\n"<<endl;
}
 }

void forgot()                                  //function for forgot
{
int ch;
system("cls");
cout<<"Forgotten ? We are here for help\n\n";
cout<<"1.Search your PIN by ATM ID"<<endl;
cout<<"2.Main menu"<<endl;
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1:                              //forgot by password
{
int count=0;
string searchuser,su,sp,n1,n2,dir;
cout<<"\nEnter your ATM ID (or) Username :";
cin>>searchuser;
ifstream searchu;
dir=searchuser+".txt";
searchu.open(dir.c_str());              

while(searchu>>su>>sp>>n1>>n2)
{
if(su==searchuser)
{
 count=1;
}
}
 searchu.close();
if(count==1)
{
cout<<"\n\nPlease wait.......";
Sleep(3000);
system("cls");
cout<<"\n\nCongrutulations ! "<<n1<<endl<<"\nYour account is found.\n";
cout<<"\nYour PIN is "<<sp<<endl;
 cout<<"\nPress Enter key for back."<<endl;
cin.get();
cin.get();
system("cls");
}
else
{
 cout<<"\nSorry, Your ATM ID (or) username is not found in our database\n";
 cout<<"\nPlease kindly contact your nearest or use TOLL Free number.\n";
 cout<<"\nPress Enter Key for back "<<endl;
cin.get();
 cin.get();
}
break;
}
case 2:
{
cin.get();
}
default:
cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
forgot();
}
}
};
int main()
{
LoginPage Run;
 int choice;
 cout<<"-----------------------------------------------------------------------------------------------\n";
 cout<<"\n       \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
     cout<<"\n       |-- WELCOME TO OUR ATM MANAGEMENT SYSTEM --|";
     cout<<"\n       \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
 cout<<"\nThis Program is created by SHIVAM KUMAR & TANNU PRIYA.\n\n";
 cout<<"-----------------------------------------------------------------------------------------------\n\n";
 cout<<"*******************        MENU        *******************************\n\n";
 cout<<"1.LOGIN (Through ATM ID)"<<endl;
 cout<<"2.REGISTER YOUR ATM CARD (For First Time Only)"<<endl;
 cout<<"3.FORGOT PIN"<<endl;
cout<<"4.Exit"<<endl;
cout<<"\nEnter your choice :";
cin>>choice;
cout<<endl;
switch(choice)
{
case 1:
 Run.login();
 main();
 break;
case 2:
 Run.registr();
 main();
break;
case 3:
Run.forgot();
main();
break;
case 4:
cout<<"~~~~~~~~~~~~~~~~ ThankYou for using ATM Management System. ~~~~~~~~~~~~~~~~~~~~\n\n";
Sleep(3000);
system("cls");
 break;
default:
system("cls");
cout<<"You have made a mistake, Try again\n"<<endl; 
main();
    }
return 0;       
}

