#include<stdio.h>
int main()
{
	                     // While Loop
	int a = 10;
	while(a>=0)
	{
		printf("%i\n",a);
		a-=1;
	}
	                    // For loop
	 int b;
	 for(b = 10 ; b >= 0 ; b--)
	 {
	 	printf("%i\n",b);
	}
	                   //Do While Loop --> not working
	int i;
	do{
		printf("%i\n",i);
		i--;
	}      
	while(i>=0);             
}
