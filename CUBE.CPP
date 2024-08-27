#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	int side,curved_surface_area,total_surface_area,volume;
	clrscr();
	cout<<"\n The side is: ";
	cin>>side;
	//curved surface area
	curved_surface_area=4*side*side;
	cout<<"\n The curved surface area is: "<<curved_surface_area;
	//total surface area
	total_surface_area=6*side*side;
	cout<<"\n The total surface area is: "<<total_surface_area;
	//volume
	volume=side*side*side;
	cout<<"\n The volume is: "<<volume;

}