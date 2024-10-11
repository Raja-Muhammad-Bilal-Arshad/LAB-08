#include<iostream>
using namespace std;
int main()
{
double a,b,Result;
char Z;
// input your number for calculation
cout<<"Enter your 1st number: ";
cin>>a;
cout<<"Enter your 2nd number: ";
cin>>b;
// input your operations
cout<<"Enter your operand:(+,-,/,*): ";
cin>>Z;
switch(Z)
{
//if you have operand + do addition
case'+':
cout<<"Result= "<<a+b;
break;
// if you have operand - do subtration
case'-':
cout<<"Result= "<<a-b;
break;
//if you are putting / then do division
case'/':
// In division check if the donominator is 0 print Math error
if(b==0)
{cout<<"Math ERROR";
return 1;}
Result=a/b;
cout<<"Result= "<<Result;
break;
case'*':
cout<<"Result= "<<a*b;
break;
default:
cout<<"Syntax ERROR";
}
}