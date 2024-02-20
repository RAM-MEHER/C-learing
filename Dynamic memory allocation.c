#include<stdio.h>
#include<stdlib.h>
                                     //Dynamic memory allocation by MALLOC();
/*int main(){
	int *ptr , n , i;
	printf("How many Elements you want to store?\n");
	scanf("%i" , &n);
	ptr = (int *) malloc(n * sizeof(int));
	printf("Enter the elements:\n");
	for(i = 0 ; i < n ; i++){
		scanf("%i" , ptr+i);
	}
	printf("Entered values are:\n");
	for(i = 0 ; i < n ; i++){
		printf("%i " , *(ptr+i));
	}
	free(ptr);
	return 0;
}*/

                                     //Dynamic memory allocation by CALLOC();
/*int main(){
	int *ptr , i , n;
	printf("How many values you want to enter?\n");
	scanf("%i" , &n);
	ptr = (int *) calloc(n , sizeof(int));
	printf("Enter the values:\n");
	for(i = 0 ; i < n ; i++){
		scanf("%i" , ptr+i);
	}
	printf("Entered values are:\n");
	for(i = 0 ; i < n ; i++){
		printf("%i " , *(ptr+i));
	}
	return 0;
}*/
