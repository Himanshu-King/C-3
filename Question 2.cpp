// Write a program to print absolute value of a number entered by the user.

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any number:\n";
    cin>>a;
    if(a<0)
    {
        a = a*-1;
    }
    cout<<"Your absolute value is "<<a;

    return 0;
}