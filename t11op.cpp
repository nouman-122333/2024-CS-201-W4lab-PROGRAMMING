#include<iostream>
using namespace std;
void Name(string name);
main()
{
string name;
cout<<"enter name"<<endl;
cin>>name;
while(true)
{
Name(name);
}
}
void Name(string name)
{
cout<<name<<endl;
}
