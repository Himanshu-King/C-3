// Write a program which takes the values of length and breadth from user and check if it is a square or not.

#include <iostream>
using namespace std;
int main()
{
    int l, b;
    cout<<"Enter length:\n";
    cin>>l;
    cout<<"Enter breadth:\n";
    cin>>b;
    if (l==b)
    {
        cout<<"It is square";
    }
    else
    {
        cout<<"It is rectangle";
    }

    return 0;
}