//Create a class named "Employee" that has three attributes: ID, name and mobile number and two functions: setter() and getter(). Now write a C++ program using the class that will take the attributes as input and display the output.

#include<iostream>
using namespace std;
class Employee
{
   public:
  string name;
  int id,num;
    
void setter()
    {
        cout<<"Enter Employee Name: ";
        getline(cin,name);
        cout<<"\nEnter Employee ID: ";
        cin>>id;
        cout<<"\nEnter Employee Phone Number: ";
        cin>>num;
    }

void getter()
{
    cout<<"\nName: "<<name<<endl;
    cout<<"\nID: "<<id<<endl;
    cout<<"\nPhone Number: "<<num<<endl;
}

};
int main()
{
    Employee obj;
    obj.setter();
    obj.getter();

    return 0;
}