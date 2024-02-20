#include<stdio.h>
void main(){
	int a , b , c;
	scanf("%i %i %i", &a , &b , &c);
	if(a > b && a > c){
		printf("%i",a);
	}
	else if(b > a && b > c){
		printf("%d",b);
	}
	else{
		printf("%i",c);
	}
}
