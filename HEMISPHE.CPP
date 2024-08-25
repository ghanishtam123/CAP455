#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
	float radius,curved_surface_area,total_surface_area,volume;
	float pi=3.14;
	clrscr();
	cout<<"\n The radius is: ";
	cin>>radius;
	//curved surface area
	curved_surface_area=2*pi*radius*radius;
	cout<<"\n The curved surface area is : "<<curved_surface_area;
	//total surface area
	total_surface_area=3*pi*radius*radius;
	cout<<"\n The total surface area is:"<<total_surface_area;
	//volume
	volume=(2/3)*pi*radius*radius*radius;
	cout<<"\n The volume is: "<<volume;
}