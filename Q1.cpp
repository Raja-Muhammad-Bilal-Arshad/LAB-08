#include<iostream>
using namespace std;
int main()
{
    int  n,count;
    cout<<"Enter your number:  ";
    cin>>n;
    count=0;
    // while(!(n>0) || !(n<0) || n!=0)
    // {
    // cout<<"Enter your number:  ";
    // cin>>n;
    // }
    
    if(n>0)
    {
        cout<<"The number is positive.";

    }
    // IF YOUR NUMBER IS POSITIVE 
    else if(n<0)
    {
        cout<<"The number is negative. ";
        // IF YOUR NUMBER IS NEGATIVE

    }
    else if(n==0)
    {
        // IF YOUR NUMBER IS EQUAL TO ZERO
        cout<<"The number is zero";

    }
    else
    // INVALID INPUT
        cout<<"INVALID INPUT.";


    return 0;
    system("pause");

}