#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    if(a<150)
    printf("The person is Dwarf.");
    else if(150<a<=165){
         printf("The person is average heighted.");
    }
    else if(165<a<=195){
         printf("The person is taller.");
    }
    else {
         printf("Abnormal height.");
    }
    return 0;
}
