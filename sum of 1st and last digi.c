#include<stdio.h>
int main()
{
    int num;
    scanf("%i",&num);
    int sum,last,first;
    int Last = num % 10;
    for(; num > 0 ;)
    {
        last = num % 10;
        num = num / 10;
        if(num == 0){
             first = last;
        }
    }
    printf("%d",Last + first);
}
