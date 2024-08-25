#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
	float Radius,radius,height,curved_surface_area,total_surface_area,volume;
	float pi=3.14;
	clrscr();
	cout<<"\n The Radius is: ";
	cin>>Radius;
	cout<<"\n The radius is: ";
	cin>>radius;
	cout<<"\n The height is: ";
	cin>>height;
	//curved surface area
	curved_surface_area=2*pi*height*(Radius+radius);
	cout<<"\n The curved surface area: "<<curved_surface_area;
	//total surface area
	total_surface_area=2*pi*(Radius+radius)*(Radius-radius+height);
	cout<<"\n The total surface area is :"<<total_surface_area;
	//volume
	volume=pi*Radius*Radius*height-pi*radius*radius*height;
	cout<<"\n The volume is: "<<volume;
}