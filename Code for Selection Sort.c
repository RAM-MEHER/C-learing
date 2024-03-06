#include<stdio.h>

void Selection_sort(int *ar , int n){
	
	int i , j , min , temp;
	
	for(i = 0 ; i < n - 1 ; i++){
		min = i;
		for(j = i + 1 ; j < n ; j++){
			if(ar[j] < ar[min])  min = j;
		}
		if(min != i){
			temp = ar[i];
			ar[i] = ar[min];
			ar[min] = temp;
		}
	}
}

void print_array(int *ar , int n){
	int i;
	for(i = 0 ; i < n ; i++){
		printf("%i " , ar[i]);
	}
	printf("\n");
}

int main(){
	int n , i;
	printf("Enter the size of array:\n");
	scanf("%i" , &n);
	int array[n] ;
	printf("Enter the elements of array to be sorted:\n");
	for(i = 0 ; i < n ; i++)
	{
		scanf("%i" ,&array[i]);
	}
	
	printf("\n");
	printf("Before sorting:\n");
	print_array(array , n);
	
	Selection_sort(array , n);
	
	printf("After sorting:\n");
	print_array(array , n);
	return 0;
}
