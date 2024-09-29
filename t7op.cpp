#include<iostream>
using namespace std;
void Compare(int num);
main()
{
int num;
cout<<"Enter num: ";
cin>>num;
Compare(num);
}
void Compare(int num)
{
if(num%2==0)
{
cout<<"number is even";
}
if(num%2==1)
{
cout<<"number is odd";
}
}