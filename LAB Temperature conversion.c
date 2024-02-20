//This program is to convert fahrenheit to celsius scale.
#include<stdio.h>
int main()
{
	float F;
	printf("Enter valve in fahrenhiet\n");
	scanf("%f",&F);
	float res;
	res=((F-32)*5)/9;
	printf("Temperature in celsius is :%f\n",res);

   float C;
   printf("Enter value in Celsius\n");
   scanf("%f",&C);
   float RES = ((9 * C) / 5 ) + 32;
   printf("%f",RES);
	return 0;	
}
