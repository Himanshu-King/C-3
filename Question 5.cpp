// Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cout<<"Enter an Operator(+,-,*,/): ";
    cin>>c;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    switch (c)
    {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b;
        break;
    
    case '-':
        cout<<a<<" - "<<b<<" = "<<a-b;
        break;

    case '*':
        cout<<a<<" * "<<b<<" = "<<a*b;
        break;
    case '/':
        cout<<a<<" / "<<b<<" = "<<a/b;
        break;
        
    default:
        cout<<"Please Enter a valid OPERATOR next time";
        break;
    }

    return 0;
}