//1. Create a class named "your name" (write your own name into the class name) that has three attributes: id, name and cgpa and two functions: setter() and getter(). Now, write a C++ program using the class that will take the attributes as input and display the output.

#include<iostream>
using namespace std;
class Shahanur
{

public:
    string name;
    int id;
    double cgpa;

    void setter()
    {
        cout<<"Enter Student Full Name: ";
        getline(cin,name);
        cout<<"\nEnter Student ID: ";
        cin>>id;
        cout<<"\nEnter Student CGPA: ";
        cin>>cgpa;
    }

    void getter()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"\nID: "<<id<<endl;
        cout<<"\nCGPA: \n"<<cgpa<<endl;
    }    
};
int main()
{
    Shahanur obj;
    obj.setter();
    obj.getter();

    return 0;
}

