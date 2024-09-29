#include<iostream>
using namespace std;
void pay(string day,float amount);
main()
{
int amount;
string day;
cout<<"Enter day: ";
cin>>day;
cout<<"enter amount: ";
cin>>amount;
pay(day,amount);
}
void pay(string day,float amount)
{
if(day=="Sunday")
{
cout<<"Discounted Amount on Sunday: "<<amount-(amount*10/100);
}
if(day!="Sunday")
{
cout<<"Discounted Amount on other days: "<<amount;
}
}

