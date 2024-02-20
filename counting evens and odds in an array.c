                                        //Finding odds and evens in an Array.
   #include<stdio.h>
   void main(){
   	int n , tot[n] , i , even = 0 , odd = 0;
   	printf("How many numbers you want to enter?\n");
   	scanf("%i",&n);
   	printf("Enter the Numbers :\n");
   	for(i = 0 ; i < n ; i++){
   		scanf("%i",&tot[i]);
	   }
	   for(i = 0 ; i < n ; i++){
	   	if(tot[i] % 2 == 0){
	   		even++;
		   }
		   else{
		   	odd++;
		   }
	   }
	   printf("There are %i EVEN numbers \n %i ODD Numbers." , even , odd);
   }
