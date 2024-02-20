#include<stdio.h>
int main(){
	int num;
	scanf("%i",&num);
	int fact_count = 0;
	// for loop
	int i;
    for(i = 1 ; i <= num ; i++)
	{
		if(num % i == 0){
			fact_count++;
		}
		    }	
      if(fact_count == 2)
      printf("prime\n");
      else
      printf("not a prime\n");
             // while loop for prime or not;
      while(i <= num){
      	if(num % i == 0){
      		fact_count++;
		  } i++;
	  }
	  if(fact_count ==  2)
	  printf("prime\n");
	  else
	  printf("not a prime");
	  return 0;
}
