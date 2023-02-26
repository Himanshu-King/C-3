// Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter cost price :\n";
    cin>>a;
    cout<<"Enter selling price :\n";
    cin>>b;
    if(a>b)
    {
        cout<<"Loss = "<<a-b;
    }
    else
    {
        cout<<"Profit = "<<b-a;
    }

    return 0;
}