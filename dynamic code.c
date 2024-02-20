//nth prime number
#include<stdio.h>
int main()
{
	int term;
	scanf("%d",&term);
	 int  fact , num , count = 0 , count1 = 0 , pri;
	for(fact = 2 ; fact  ; fact++){
		for(num = 1 ; num <= fact ; num++){
			if(fact % num == 0){
				count++;  // 2--> c = 2 , 3 --> c = 4
			}
		}
		if(count == 2){
			pri = fact;
			count1++;
		}
		count = 0;
		if(term == count1){
			printf("%d",pri);
			break;
		}
	}
	
	return 0;
}
