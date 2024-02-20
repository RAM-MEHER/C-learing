
//This programe is to calculate area and peri of rect,circle.
#include<stdio.h>
int main()
{
	float l,b,r,aror,aroc,perr,perc;
	printf("Enter the length and breadth of rectangle\n");
	scanf("%f %f",&l,&b);
	perr=2*(l+b);
	aror=l*b;
	printf("The area and perimeter of given rectangle is :% f , % f\n\n ",aror,perr);
	printf("Now enter the radius of the circle\n");
	scanf("%f",&r);
	aroc=3.14*r*r;
	perc=2*3.14*r;
	printf("Area and circumference of the given circle is :% f , % f\n ",aroc,perc);
	
	return 0;
}
