#include<stdio.h>
#define p printf
#define s scanf
struct rectangle{
	float len , bre , area , peri; 
};
struct student{
	char name[26];
	int age;                          //Declaring Data type
};
typedef struct student st;        //creating another name for struct student
typedef struct rectangle re;
int main(){
  	/*int a;
	p("%i\n",sizeof(a));                //Printing size of datatype
	st s1 = {"Meher" , 17};        // Storing data in structure
	p("%i\n",sizeof(s1));              //Printing size of variable in structure
	p("name is %s\n" , s1.name);
	p("age is %i\t" , s1.age);	
	
	                                  //Reading structure from user
	            st s2;
	        p("Enter name and age\n");
	        s("%[^\n]s" , s2.name);      //reading name in structure 
	        s("%i",&s2.age);            // Reading age in structure
	        p("%s\t %i", s2.name , s2.age);
	        
	        re r1 , r2 ;
	        p("Enter the Length and Breadth of r1 : \n");
	        s("%f %f",&r1.len ,&r1.bre);
	        p("l=%f  b=%f\n",r1.len , r1.bre);
	        r1.peri = 2*(r1.len + r1.bre);             
	        r1.area = r1.len * r1.bre;
	        p("Area = %f \t Peri = %f",r1.area , r1.peri);*/
	        
	                                 //Array of structures
	        typedef struct std ss;
	                struct std{
	                	char peru[25];
	                	int ageu;
					};
					ss ar[3];
					int i;
					for(i = 0 ; i < 3 ; i++){
						p("Enter the name of student %i\n", i + 1);
						s("%s" , &ar[i] . peru);
						p("Enter the age of %i student\n" , i+1);
						s("%i",&ar[i].ageu);
					}
					for(i = 0 ; i < 3 ; i++){
						p("Name is %s\n" , ar[i].peru);
						p("Age is %i\n" , ar[i].ageu);
					}
	       
	return 0;
}
