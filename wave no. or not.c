#include<stdio.h> 
//#include<stdbool.h>          //wave numbre.
int main(){
	int num;
	scanf("%i",&num);       //526193
	int pre = num % 10;
	num /= 10;               //pre --> previous
	
	
	int prs = num % 10;
	int up , down;
	if(pre > prs)
	{
		down = 1;
		up = 0;
	}
	if(prs > pre){
		up = 1;
		down = 0;
	}
	num/=10;
	int flage = 1;
	while(num){
		pre = prs;
		prs = num % 10;
		num /= 10;
    
		if(down == 1 && prs > pre){
			up = 1;
			down = 0;
		}
		else if(up == 1 && pre > prs){
			down = 1;
			up = 0;
		}
		else{
			flage = 0;
			break;
		}
		
		}
		
		if(flage == 1){
			printf("It is a Wave Number.");
		}
		else{
			
			printf("It is not a Wave Number.");
			
		}
		return 0;
		
}
