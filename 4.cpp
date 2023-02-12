//Create a class named "Arith" that has two integer variables as attributes and four functions: add (), subtract (), multiply() and divide(). Now, write a C++ program using the class that will take two integers as input and perform arithmetic operation between them.

#include<iostream>
using namespace std;

class Arith
{
public:
int a,b;
void add()
{
    cout<<"Enter First Integer Number: ";
    cin>>a;
    cout<<"\nEnter Second Integer Number: ";
    cin>>b;
    cout<<"\nAfter Adding Two Integer: "<<a+b<<endl;
}
void subtract()
{
    cout<<"\nEnter First Integer Number: ";
    cin>>a;
    cout<<"\nEnter Second Integer Number: ";
    cin>>b;
    cout<<"\nAfter Subtractting Two Integer: "<<a-b<<endl;
}
void multiply()
{
    cout<<"\nEnter First Integer Number: ";
    cin>>a;
    cout<<"\nEnter Second Integer Number: ";
    cin>>b;
    cout<<"\nAfter Multiplying Two Integer: "<<a*b<<endl;
}
void divide()
{
    cout<<"\nEnter First Integer Number: ";
    cin>>a;
    cout<<"\nEnter Second Integer Number: ";
    cin>>b;
    cout<<"\nAfter dividing Two Integer: "<<a/b<<endl;
}
};
int main()
{
    Arith obj;
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();

    return 0;
}