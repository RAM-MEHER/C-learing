#include<stdio.h>

int main(){
	int num;
	scanf("%i",&num);
	int mod , sum = 0 , pro = 1; 
	for(;num > 0 ; ){
		mod = num % 10;
		num = num / 10;
		if(mod % 2 == 0){
			sum = sum + mod;
		}
		else{
			pro = pro * mod;
		}
	}
	printf("%i\n",sum);
	printf("%i",pro);
	return 0;
}
