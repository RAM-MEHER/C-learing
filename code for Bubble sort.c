#include<stdio.h>

void Bubble_sort(int *array , int size){
	int i , j;
	for(i = 0 ; i < size - 1 ; i++){
		for(j = 0 ; j < size - 1 ; j++){
			if(array[j] > array[j+1]) {
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

void print_array(int *array , int size){
	int i;
	for(i = 0 ; i < size ; i++){
		printf("%i " , array[i]);
	}
	printf("\n");
}

int main(){
	int n , i;
	printf("Enter the size of the array:\n");
	scanf("%i" , &n);
	int array[n] ;
	printf("Enter the elements to be sorted:\n");
	for(i = 0 ; i < n ; i++){
		scanf("%i" ,&array[i]);
	}
	
	printf("Elements before sorting:\n");
	print_array(array , n);
	Bubble_sort(array , n);
	printf("Elements after sorting:\n");
	print_array(array , n);
	return 0;
}
