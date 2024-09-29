#include<iostream>
using namespace std;
void add(int num1,int num2);
void sub(int num1,int num2);
void mult(int num1,int num2);
void divison(int num1,int num2);
main()
{
int num1,num2;
char op;
cout<<"enter num1= ";
cin>>num1;
cout<<"enter num2= ";
cin>>num2;
cout<<"enter character: ";
cin>>op;
if (op=='+')
{
add(num1,num2);
}
if (op=='-')
{
sub(num1,num2);
}
if(op=='*')
{
mult(num1,num2);
}
if (op=='/')
{
divison(num1,num2);
}
}
void add(int num1,int num2)
{
cout<<"sum= "<<num1+num2;
}
void sub(int num1,int num2)
{
cout<<"sub= "<<num1-num2;
}
void mult(int num1,int num2)
{
cout<<"mult= "<<num1*num2;
}
void divison(int num1,int num2)
{
cout<<"divison= "<<num1/num2;
}