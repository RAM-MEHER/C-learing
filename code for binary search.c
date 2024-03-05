#include<stdio.h>
int Binary_search(int *array , int size , int low , int high , int key){
	int i = 0 ; 
	while(low <= high){
		int mid = (low + high) / 2;
		if(key == array[mid]) return mid;
		else if(key > array[mid]) low = mid + 1;
		else high = mid - 1;
	
}
return -1;
}
int main(){
	int n , i , key;
	printf("Enter the size of array:\n");
	scanf("%i" ,&n);
	printf("Enter the elements in a sorted manner:\n");
	int array[n] ;
	for(i = 0 ; i < n ; i++){
		scanf("%i" , &array[i]);
	}
	printf("Enter the key:\n");
	scanf("%i" , &key);
	
	int low = 0 , high = n - 1 ;


int value = Binary_search(array , n , low , high  , key);

if(value != -1){
printf("key is at index %i" , value);
}
else{ 
printf("not found!");
}


}
