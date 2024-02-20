#include<stdio.h>
int main(){
    int l , r , i , n , mod , count = 0 , count1 = 0;
    scanf("%i %i", &l , &r);
    
    for(i = l ; i <= r ; i++){
    	int h = i;
        while(i){
        mod = i % 10;
        count++;
        if(i % mod == 0){
            //n = i;
            count1++;
             
             if(count == count1){
			 
             n = h;
         }
             i = i / 10;
        }
       
        //printf("%i",i);
        }
        if(count == count1){
            printf("%i",h);
        }
        
        count = 0;
        count1 = 0;
        
    }
    return 0;
}
