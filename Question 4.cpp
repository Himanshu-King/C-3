// Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter an integer:\n";
    cin>>a;
    if(a<0)
    {
        cout<<"The number is negative and skipped.";
    }
    else
    {
        cout<<"Your number is:"<<a;
    }

    return 0;
}