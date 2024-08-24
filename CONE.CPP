#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
	float radius,length,curved_surface_area,total_surface_area,height,volume;
	float pi=3.14;
	clrscr();
	cout<<"\n the radius is : ";
	cin>>radius;
	cout<<"\n the length is : ";
	cin>>length;
	//curved surface area
	curved_surface_area=pi*radius*length;
	cout<<"\n The curved surface area is : "<<curved_surface_area;
	total_surface_area=pi*radius*length+pi*radius*radius;
	cout<<"\n The total surface area is : "<<total_surface_area;
	//volume
	cout<<"\n The height is : ";
	cin>>height;
	volume=1/3*pi*radius*radius*height;
	cout<<"The volume is : "<<volume;
}