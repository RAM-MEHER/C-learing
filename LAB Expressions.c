#include<stdio.h>

int main(){
    int a , b , c , d;
    scanf("%i %i %i %i" , &a , &b , &c , &d);
    int res = a/b*c-b+a*d/3;
    //Follows BODMAS Rule;
    printf("%i", res);
    int r = (a++) + (++a);   // if a = 1 then a++ = 1 now a = 2 and  ++a = 3; ---> ans = 4;
    printf("\n%i",r);
    return 0;
}
