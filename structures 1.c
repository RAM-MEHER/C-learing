#include<stdio.h>
#define p printf
#define s scanf
struct emp{
	char name[25] , organization[25];
	int year , income;
};
typedef struct emp e;
int main(){
	int i;
e p1 ,  p2 ,  p3 ,  p4 ,  p5 ,  p6;
       	e ar[6];
       	for(i = 1 ; i <= 6 ; i++){
       		p("Enter the name of Employee %i \n" , i);
       		s("%s" , &ar[i] . name);
       		p("Enter the org of employee %i \n" , i);
       		s("%s" , ar[i].organization);
       		p("Enter the year of Employee %i \n" , i);
       		s("%i",&ar[i].year);
       		p("Enter the income of Employee %i\n", i);
       		s("%i",&ar[i].income);
		   }
		   for(i = 1 ; i <= 6 ; i++){
       		p("Name of Employee  is %s \n" , ar[i].name);
       	
       		p("Org of employee %s \n" , ar[i].organization);
       	
       		p("Year of Employee %i \n" , ar[i].year);
       	
       		p("Income of Employee %i\n", ar[i].income);
       	
		   }
		   return 0;
		
}
