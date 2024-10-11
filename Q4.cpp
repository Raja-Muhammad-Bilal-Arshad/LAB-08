#include<iostream>
using namespace std;
int main()
{
int age, income;
//input your age and income
cout<<"Enter your age ";
cin>>age;
cout<<"Enter your income: ";
cin>>income;
// age is less than 18 output STUDENT
if(age<18)
cout<<"STUDENT";
// if age is greater than 18 move in the else part
else
{
// if age is less than 60 and income is greater than 50000
if(age<=60 && income>=50000)
{
cout<<"Professional";
}
// if the condition is wrong the man is retired
else
{
cout<<"Retired";
}
}
}