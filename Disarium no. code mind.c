#include<stdio.h>
#include<math.h>
int main(){
    int num , mod , sum = 0;
    scanf("%i",&num);
    int i,count = 0;
    for(; num > 0 ;){
        num = num / 10;
        count++;
    }
   for(i = 0 ; num > 0 , i < count  ; i++){
       mod = num % 10;
                                                                      // D i s a r i u m    N u m b e r     
       sum = sum + pow(mod , (count - i));           
                                                                // 3 4 6 ---->  3**1 + 4**2 + 6**3 == 3 4 6  but 346 not satisfy that disarium. (** --> power).
       num = num / 10;
   }
   if(sum != num)
   printf("False");
   else
   printf("True");
   return 0;
}
