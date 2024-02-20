#include<stdio.h>
int main(){
    int t , i , a , mod , fac = 1 , j , sum = 0 , n;
    scanf("%i",&t);
    for(i = 1 ; i <= t ; i++){
        scanf("%i" , &a);
        n = a;
        while(a!=0){
            mod = a % 10;
        for( j = 1 ; j <= mod ; j++){
            fac = fac * j;
        }
        a = a / 10;
        sum = sum + fac;
        fac = 1;
        }
        if(n == sum){
            printf("Strong\n");
        }
        else{
            printf("Not Strong\n");
        }
    }
    return 0;
}
