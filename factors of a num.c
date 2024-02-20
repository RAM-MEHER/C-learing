#include<stdio.h>
int main()
{
    int num;
    scanf("%i",&num);
    int count;
    for(count = 0 ;num > 0 ;count++){
        if(num % count == 0)
        printf("%i",count);
    }
    return 0;
}



