#include<iostream>
using namespace std;
void Fuel(float distance);
main()
{
float distance;
cout<<"Enter distance: ";
cin>>distance;
Fuel(distance);
}
void Fuel(float distance)
{
if(distance>=10)
{
cout<<"fuel needed: "<<distance * 10;
}
if(distance<10)
{
cout<<"fuel needed: "<<"100";
}
}

