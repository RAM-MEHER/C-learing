#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int sum=0,i,fact;
    for(i = 1;i < num ;i++){
        if(num % i == 0){
        //printf("%d ",i);-->prints the factors
         sum = sum + i;    // printf the factors sum
        }
    }
     
    printf("%i",sum);
}
