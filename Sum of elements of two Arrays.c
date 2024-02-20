                          // Sum of elements of Two Arrays
    #include<stdio.h>
    void main(){
    	int n , ar1[n] , ar2[n] , ar3[n] , i , sum = 0 ;
    	printf("How much size you want?\n");
    	scanf("%i",&n);
    	printf("Now enter the numbers of 1st Array\n");
    	for(i = 0 ; i < n ; i++){
    		scanf("%i",&ar1[i]);
		}
		printf("Now enter the numbers of 2nd Array\n");
		for(i = 0 ; i < n ; i++){
			scanf("%i",&ar2[i]);
		}
		for(i = 0 ; i < n ; i++){
		    	ar3[i] = ar1[i]  +  ar2[i];
			sum = sum + ar3[i];
			printf("The sum of index %i is %i\n", i , ar3[i]);
		}
		printf("Total Sum is %i",sum);
	}
