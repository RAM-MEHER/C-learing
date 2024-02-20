#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    int i;
    for(i=0;i<a;i++)
    {
        int j;
        for(j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
