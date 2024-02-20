                                //  A   R   R   A   Y   S  //
#include<stdio.h>

int main(){
	//int marks[6];  ---> declaring array
	int marks[6] = {10,20,30,40,50,60};       //storing int values
	printf("%d\n",marks[0]);
	printf("%d\n",marks[1]);        //  max size local declaration == pow(10,6);
                                    	//  max size global declaration == pow(10,7);
	printf("%d\n",marks[2]);    //0 , 1 , 2 , 3 ---> indexes;
	printf("%d\n",marks[3]);
	printf("%d\n",marks[4]);
	                           /*to find length of array 
	                           int marks[] = {10,20,30,40,50,60};        ---------> 6 values
	                           int len = sizeof(marks)/sizeof(int);
							   printf("%i",len) */                    //--------->  prints '6';
	                    
	
	char data[10]={'A','B','C','D'};  // storing char values
	printf("%c",data[0]);
	
}
