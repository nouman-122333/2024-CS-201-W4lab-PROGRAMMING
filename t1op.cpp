#include<iostream>
using namespace std;
void fuel();
main()
{
fuel();
}
void fuel()
{
float distance;
float fuel_needed;
cout<<"Enter the distance: ";
cin>>distance;
fuel_needed=distance * 10;
cout<<"Fuel Needed: "<<fuel_needed;
}