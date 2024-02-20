#include <stdio.h>

/*int main() {
  int n , count = 0;
  scanf("%i",&n);
  while(n != 0){
      n = n / 10;
      count++;
  }
printf("%i",count);
    return 0;
}*/
int  digits(int n){
   static int count = 0;
      if(n > 0){
        count++;
   n = n / 10;
      }
   else{
   return count;
   }
     digits(n);
}
int main(){
    int n;
    scanf("%i",&n);
    int c = digits(n);

    printf("%i",c);
}
