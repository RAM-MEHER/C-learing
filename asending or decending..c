#include<stdio.h>
int main(){
	int num , pre , prs;
	scanf("%i",&num);
	int increase = 0 , decrease = 0 , count = 0;
	for(;num > 0 ;)
	{
		pre = num % 10;
		num/=10;
		count++;
		prs = num % 10;
		if(pre > prs){
			increase++;
		}
		else if(pre < prs){
			decrease++;
		}
		else{
		printf("Mixed number.");
	}
		num /= 10;
		
		
	}
	if(increase == count){
		printf("Acending order.");
	}
	else if(decrease == count){
		printf("Decending order.");
	}
	else{
		printf("Mixed number.");
	}
	
	return 0;
}
