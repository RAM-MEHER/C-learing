#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter the two Numbers\n");
	scanf("%f %f",&a,&b);
	float sum,sub,pro;
	sum = a + b;
	sub = a - b;
	pro = a * b;
	printf("sum =% f\nsub =% f\npro =% f\n",sum,sub,pro);
	float div = (a / b);
	printf("div =% .3f",div);
	return 0;
}
	
	
	
	
	
	
	
	
	

