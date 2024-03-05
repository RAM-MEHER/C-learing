#include<stdio.h>
// Function for searching
int linear_search(int *array , int size , int key){
int i;
	for(i = 0 ; i < size ; i++){
		if(array[i] == key){
			return i;
		}
	}
	   return -1;
}

int main(){
	int n , key;
	printf("Enter the size of Array:\n");
	scanf("%i" , &n);
	int array[n] , i;
	printf("Enter elements of an array:\n");
	for(i = 0 ; i < n ; i++){
		scanf("%i" , &array[i]);
	}
	printf("Enter key to found in array:\n");
	scanf("%i" , &key);
	
int value = linear_search(array , n , key);
	if(value  != -1) printf("Key found at %i index." , value);
	else printf("Key not found!");
	return 0;
}
