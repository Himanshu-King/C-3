// Write a program to calculate makrks to grades. Follow the Conversion rule as given below:

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter Your Marks: ";
    cin>>a;
    if (a>90)
    {
        cout<<"Your grade is A+";
    }
    else if (a>80)
    {
        cout<<"Your grade is A";
    }
    else if (a>70)
    {
        cout<<"Your grade is B+";
    }
    else if (a>60)
    {
        cout<<"Your grade is B";
    }
    else if (a>50)
    {
        cout<<"Your grade is C";
    }
    else if (a>40)
    {
        cout<<"Your grade is D";
    }
    else if (a>30)
    {
        cout<<"Your grade is E";
    }
    else
    {
        cout<<"Your grade is F";
    }
    
    return 0;
}