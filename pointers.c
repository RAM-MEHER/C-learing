#include<stdio.h>
int main()
{
	int a=10;
	int  *f=&a;// this stores the address of a;
	printf("%p\n",f);//this prints the address of a; --->000000062FE14
	printf("%i\n",*f+1);//here *f says the value so output will be 11; ----> 11
	printf("%i\n",f+1);   //?---->6487576
	printf("%i",&a+1);//?---->6487576
}
