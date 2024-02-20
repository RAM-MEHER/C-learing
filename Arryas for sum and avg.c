                            // sum and avg of marks by arrays
    #include<stdio.h>
    void main(){
    	int n , i , sum = 0;
    	printf("Enter the no. of inputs : \n");
    	scanf("%i",&n);
    	int tot[n];
    	printf("Now enter the input values : \n");
    	for(i = 0 ; i < n ; i++ ){
    		scanf("%i",&tot[i]);
		}
		for(i = 0 ; i < n ; i++){
			sum = sum + tot[i];
		}
		printf("Sum is : %i\n",sum);
	   float avg = (float)sum / n;   //Type conversion
    	printf("Average is : %.4f",avg);
	}
