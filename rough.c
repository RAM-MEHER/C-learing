#include<stdio.h>
int main(){
	int n , i , *ptr;
	printf("Enter the size of Array:\n");
	scanf("%i" , &n);
	int arr[n] ;
	printf("Enter the elements in the array\n");
	for(i = 0 ; i < n ; i++){
		scanf("%i" , &arr[i]);
	}
	for(ptr = arr ; ptr < arr + n ; ptr++){
		printf("%i " , *ptr);
	}
	
	  }
