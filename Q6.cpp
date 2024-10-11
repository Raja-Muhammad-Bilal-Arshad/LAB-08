#include<iostream>
using namespace std;
int main ()
{
int a;
// Enter your number
cout<<"Enter your number: ";
cin>>a;
// Firstly check if the number is not equal to 0 then enter
if(a!=0)
(a%2==0)? cout<<a<<" is a multiple of 2" : cout<<a<<" is not multiple of 2";
else
// if the number is equal to zero then print it is zero
cout<<"Sorry your input is equal to zero";
}