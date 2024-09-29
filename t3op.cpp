#include<iostream>
using namespace std;
void howManyStickers();
main()
{
howManyStickers();
}
void howManyStickers()
{
int sides,faces;
faces=6;
cout<<"1cube= "<<faces<<"faces"<<endl;
int how_many_stickers;
cout<<"how_many_stickers=faces*sides*sides"<<endl;
cout<<"Enter no. of sides: ";
cin>>sides;
how_many_stickers=6 * sides * sides;
cout<<"How Many Stickers: "<<how_many_stickers;
}