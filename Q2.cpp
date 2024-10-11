#include<iostream>
using namespace std;
int main()
{
int a,b,c,avg;
char grade;
cout<<"Enter your marks for the first Subject: ";
cin>>a;
// Enter your marks
while((a>=100) || (a<0))
{
// IF YOUR MARKS ARE INVALID
cout<<"Marks cannot be greater than 100 or less than 0"<<endl;
cout<<"Enter your marks for the first Subject: "<<endl;
cin>>a;
}
// Enter your marks
cout<<"Enter the marks for the second subject: ";
cin>>b;
while((b>=100) || (b<0))
{
// IF YOUR MARKS ARE INVALID
cout<<"Marks cannot be greater than 100 or less than 0"<<endl;
cout<<"Enter the marks for the second subject: "<<endl;
cin>>b;
}
// Enter your marks
cout<<"Enter the marks for the third subject: ";
cin>>c;
while((c>=100) || (c<0))
{
// IF YOUR MARKS ARE INVALID
cout<<"Marks cannot be greater than 100 or less than 0"<<endl;
cout<<"Enter the marks for the third subject: "<<endl;
cin>>c;
}
avg=(a+b+c)/3;
// Take average
// go in only if the average is less than 100
if(avg<=100)
{
// if average is greater than 80 go in this if
if(avg>=80)
grade='A';
else
{
// if your average is less greater than 70
if(avg>=70)
{
grade='B';
}
else
{
// If your averge is greater than 60
if(avg>=60)
{
grade='C';
}
else
//else if your average is less than 60
{
grade='F';
}
}
}
}
cout<<grade<<endl;
}