
#include<stdio.h>
void add(int a){/* void is a function whcih does not return any value 
                    In parenthesis we can name any variable not same as below main funtion  */
                    
	a++;
	printf("%i\n",a);
}
int sub(int b){   // here int is a return type which returns int value like that we can return any type by mentioning
  b-=1;             //return type of returing data
return b;
}
int main()
{
	int a=100;
	add(a);
	int b=100;
int res = sub(b);    //here we should store the returining value in some other variable
printf ("%i",res);
return 0;
}

