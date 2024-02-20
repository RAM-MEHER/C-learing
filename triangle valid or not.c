#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    if(a+b<=c || a+c<=b || b+c<=a)
     printf("Invalid triangle");
   else if(a+b>c || a+c>b || b+c>a)
    printf("Valid triangle");
    else
    printf("Invalid triangle");
    return 0;
}
