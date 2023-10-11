// Bit wise operators-->these are done after converting no.s into binaries(0,1)
#include<stdio.h>
int main()
{	
	int a,b,c,d;
	a=3;
	b=6;
	printf("%i\n",a & b);//and operator
	printf("%i\n",a||b);//or operator
	printf("%i\n",a<<2);//left shift-->(2^n*taken no.):n-->how many types we want to shift(n=2)
	printf("%i",a>>2);//right shift-->(taken no./2^n):n-->how many types we want to shift(n=2)
	return 0;
}
