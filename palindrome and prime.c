#include<stdio.h>
int count = 0 ,  pri ;
void prime(int num){
	int i;
	for( i = 1 ; i <= num ; i++){
		if(num % i != 0){
			i = pri;
			count++;
		}
	}
	printf("%i",pri);
}


int main(){
	int num;
	scanf("%i",&num);
	 prime(num);
}
