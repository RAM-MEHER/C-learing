#include<stdio.h>
int main()
{
int num;
scanf("%i",&num);

int digi_count = 0;

for(digi_count = 0; num > 0 ; digi_count++){
	num = num / 10;

}
printf("%d",digi_count);
}
