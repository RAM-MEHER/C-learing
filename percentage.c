//find percentage when 6 subjects marks given
#include<stdio.h>
int main()
{
	int m,t,h,e,s,b;
	scanf("%d%d%d%d%d%d",&m,&t,&h,&e,&s,&b);
	int total=m+t+h+e+s+b;
	float percentage=((total/600.0)*100);
	printf("%d\n",total);
	printf("%.2f",percentage);
}
