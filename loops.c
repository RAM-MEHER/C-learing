//////////         LOOPS       for , do while , while
//////// 2 types of loops --> finite loops , infinite loops
///// loop will stop when condition is false until then it will execute continously
#include<stdio.h>
int main()
{
                                 	//while loop
	int a=0; // initiation
	while(a<=10){ // condition
	// printfs upto 1  to 10
	printf("%d\n",a);
	a++;// increment
}

                                     // for loop
int b;
for(b=0;b<=10;b++){// (initiation;condition;increment)
//printf upto 1 to 10
printf("%d\n",b);
}
                            
                            // do while loop
int c=0;//initiation 
do{
	printf("%d\n",c);
	c++;            // increment
}
while(c<=10);        // condition

                              // Nested loops
             int i, j;
  
  // Outer loop
  for (i = 1; i <= 2; i++) {
    printf("Outer: %d\n", i);  // Executes 2 times
    
    // Inner loop
    for (j = 1; j <= 3; j++) {
      printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    }
  }
  
  return 0;
}


