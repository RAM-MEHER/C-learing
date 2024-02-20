#include<stdio.h>
int main()
{
    int num;
    scanf("%i",&num);
    int i;
    int count = 0;
    while(num >= i)
    {
      // int a =num % 10;
        num = num / 10;
        count++;
    }
    printf("%i",count);
}

