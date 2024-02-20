// This programe is about conversions.
#include<stdio.h>
int main()
{
	//The below value is taken in KM
	int dist=5;
	printf("The distance in kilometers is :% i\n",dist);
	//Now we convert the above value into other units
	int dist_in_M=dist*1000;
	printf("Distance in meters is :% i\n",dist_in_M);
	int dist_in_CM=dist*100000;
	printf("Distance in centi meters is :% i\n",dist_in_CM);
	float dist_in_ft=dist*3280.83;
	printf("Distance in foot is :% f\n",dist_in_ft);
	float dist_in_inch=dist*39370.07;
	printf("Distance in inches is :% f\n",dist_in_inch);
	return 0;	
	
}
