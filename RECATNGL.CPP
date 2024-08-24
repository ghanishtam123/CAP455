#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{	//perimeter of rectangle.
	int length,breadth;
	int perimeter,area;
	clrscr();
	cout<<"enter length: ";
	cin>>length;
	cout<<"\n enter breadth: ";
	cin>>breadth;
	perimeter=2*(length+breadth);
	cout<<"\n The perimeter is: "<<perimeter;

	//area of rectangle.
	area=length*breadth;
	cout<<"\n the area is: "<<area;

}