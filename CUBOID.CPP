#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
	int length,breadth,height,curved_surface_area,total_surface_area,volume;
	clrscr();
	cout<<"\n The length is: ";
	cin>>length;
	cout<<"\n The breadth is: ";
	cin>>breadth;
	cout<<"\n The height is: ";
	cin>>height;
	//curved surface area
	curved_surface_area=2*height*(length+breadth);
	cout<<"\n The curved surface area is: "<<curved_surface_area;
	//total surface area
	total_surface_area=2*(length*breadth+breadth*height+height*length);
	cout<<"\n The total surface area is: "<<total_surface_area;
	//volume
	volume=length*breadth*height;
	cout<<"\n The volume is: "<<volume;
}