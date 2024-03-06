#include<stdio.h>
                                             //Here we take one element in unsorted array and compare with all elements in sorted array
void Insertion_sort(int *arr , int size){
	int i , j , temp;
	for(i = 1 ; i < size ; i++){                         //this loop is for decreasing unsorted sublist
		temp = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] > temp){              //this loop is for increasing sorted sublist
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

void print_array(int *arr , int size){
	int i;
	for(i = 0 ; i < size ; i++){
		printf("%i " , arr[i]);
	}
	printf("\n");
}


int main(){
	int n , i;
	printf("Enter the size of array:\n");
	scanf("%i" , &n);
	int array[n];
	printf("Enter the elements of array to be sorted:\n");
	for(i = 0 ; i < n ; i++){
		scanf("%i" , &array[i]);
	}
	
	printf("Array Before Sorted:\n");
	print_array(array , n);
	
	Insertion_sort(array , n);
	
	printf("Array After Sorting:\n");
	print_array(array , n);
	return 0;
}
