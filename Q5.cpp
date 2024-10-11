#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
int a;
// Take input
cout<<"Enter your number: ";
cin>>a;
switch(a)
{
//if the user input 1 2 3 4 5 print weekday
case 1:
case 2:
case 3:
case 4:
case 5:
cout<<"It's a weekday";
break;
// if user inputed 6 7 print weekend
case 6:
case 7:
cout<<"It's a weekend"<<endl;
cout<<setw(4)<<setfill(' ')<<" >,< "<<endl;
break;
default:
cout<<"INVALID";
}
}