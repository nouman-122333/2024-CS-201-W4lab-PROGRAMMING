#include<iostream>
using namespace std;
void Feet();
main()
{
Feet();
}
void Feet()
{
float inches;
float In_Feet;
cout<<"Enter the value in inches: ";
cin>>inches;
In_Feet=inches / 12;
cout<<"Equivalent Feet: "<<In_Feet;
}