//This programe is to find the area of the given Triangle
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	//Below line is to give a values by user
	scanf("%d %d %d",&a,&b,&c);
	//Below line is to find semi perimeter
	float semi;
	semi = (a+b+c)/2;
	printf("The semi perimeter of the triangle is%f\n",semi);
	//Now we goes to find the area
	float area;
	//Formulae for Area
	area = sqrt((semi*(semi-a)*(semi-b)*(semi-c)));
	printf("The AREA of the given triangle is %f\n",area);
	
}
