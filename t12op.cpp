#include<iostream>
using namespace std;
void pay(float amount,string day);
main()
{
float amount;
string day;
while(true)
{
cout<<"Enter day: ";
cin>>day;
cout<<"enter amount: ";
cin>>amount;
pay(amount,day);
}
}
void pay(float amount,string day)
{
if(day=="Sunday")
{
cout<<"Discounted Amount on Sunday: "<<amount-(amount*10/100)<<endl;
}
if(day!="Sunday")
{
cout<<"Discounted Amount on other days: "<<amount-(amount*5/100)<<endl;
}
}


