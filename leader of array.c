#include<stdio.h>
int main(){
	int n , i;
	scanf("%i",&n);
	int A[n] , count = 0;
		int j;
	for( i = 0 ; i < n ; i++){
		scanf("%i",&A[i]);
	}
	
	
		
		for(j = 0 ; j < n  ; j++){
			for(i = 0 ; i < n ; i++){
				if(A[i] == j){
					count++;
				}
				
					
			}
			if(count > 1){
				printf("%i\n",A[i]);
				}
				count = 0;
		
		}
	
	return 0;
}
