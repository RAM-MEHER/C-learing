#include<stdio.h>        //Reverse the number
int main()
{
	int num;
	scanf("%i",&num);
	int l;                          
	for(;num>0;){
	
	l = num % 10;                  // 1234 --> 4321
	num = num / 10;
    printf("%i",l);
  }
}
