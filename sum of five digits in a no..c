#include <stdio.h>


int main() {
	
    int n;                      //67878
    scanf("%d", &n);
   printf("%i",n%10+(n/10)%10+(n/100)%10+(n/1000)%10+(n/10000)%10);
    return 0;
}
