#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
	float radius,height,curved_surface_area,Total_surface_area,volume;
	float pi=3.14;
        clrscr();
	cout<<"The radius is: ";
	cin>>radius;
	cout<<"\n The height is: ";
	cin>>height;
	//curved surface area
	curved_surface_area=2*pi*radius*height;
	cout<<"\n The curved surface area is: "<<curved_surface_area;
	//Total surface area
	Total_surface_area=(2*pi*radius*height)+(2*pi*radius*radius);
	cout<<"\n The total surface area is : "<<Total_surface_area;
	//Volume
	volume=pi*radius*radius*height;
	cout<<"\n The volume is: "<<volume;
}

