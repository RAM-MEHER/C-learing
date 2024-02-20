#include<stdio.h>
int main()
{
	int a;
	scanf("%i",&a);
	int dig_count = 0;
	while(a<0){
		digi_count++;
		a = a/10;
	}
	printf("%i",digi_count);
}
