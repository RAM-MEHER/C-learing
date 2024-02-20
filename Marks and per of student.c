//This programe is about student marks and percentage.
#include<stdio.h>
int main()
{
	float a,b,c,d,e,tot,per;
	printf("Enter the marks of the five subjects\n");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	tot=a+b+c+d+e;
	printf("Total marks is :% f\n",tot);
	per=(tot*100)/500;
	printf("Percentage of the student is :% f\n",per);
	
	return 0;
}
