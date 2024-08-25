#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
	float Radius,radius,curved_surface_area,total_surface_area,volume;
	float pi=3.14;
	cout<<"\n The Radius is: ";
	cin>>Radius;
	cout<<"\n The radius is: ";
	cin>>radius;
	//curved surface area
	curved_surface_area=2*pi*(Radius*Radius+radius*radius);
	cout<<"\n The curved surface is: "<<curved_surface_area;
	//total surface area
	total_surface_area=2*pi(Radius*Radius+radius*radius)+pi*(Radius*Radius-radius*radius);
	cout<<"\n The total surface area: "<<total_surface_area;
	//volume
	volume=2*pi*(Radius*Radius*Radius-radius*radius*radius);
	cout<<"\n The volume is: "<<volume;
}