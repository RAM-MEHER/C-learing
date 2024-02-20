#include<stdio.h>
int main(){

 int num;
 scanf("%d",&num);
 int b = 0 , place = 1 , mod ;
 while(num != 0){
 mod = num % 2 ;
 num = num / 2;
 b = b + mod * place;
 place = place * 10;
}
printf("%d",b);
return 0;
}












/*#include<stdio.h>
int main()
{
	int a,i=1,binary=0,rem;
	scanf("%d",&a);
	while(a!=0)
	{
	   int  rem=a%2;
		a=a/2;
		binary=binary+rem*i;
		i*=10;
		
	}
	printf("%d",binary);
} */

