#include<stdio.h>
int sub(int b){   // here int is a return type ehich returns int value like that we can return any type by mentioning
  b-=1;             //return type of returing data
return b;
}

int main(){
	int b=100;
int res = sub(b);    //here we should store the returining value in some other variable
printf ("%i",res);
return 0;
}
