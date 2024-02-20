#include <stdio.h>

int main() 
{ char c;
   scanf("%c",&c);
   char st[100] , sen[100];
   scanf("%s\n",&st);
  scanf("%[^\n]",sen);
    printf("%c\n",c);
    printf("%s\n",st);
    printf("%s\n",sen);
    return 0;
}

