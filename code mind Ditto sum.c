#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    int x1=a+c;
    int y1=b-c;
    int x2=a-c;
    int y2=b+c;
    if(x1==y1 || x1==y2 || x2==y1 || x2==y2 || a==b)
    printf("YES");
    else
    printf("NO");

    return 0;
}
