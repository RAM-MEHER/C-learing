//identify vowels
#include<stdio.h>
int main()
{
	char me;
	scanf("%c",&me);
	//This line works to change uppercase to lowercase;
	if(me >= 65 && me<=90){
		me +=32;//Difference b/w small and capital letters is 32;
	}
	if(me=='a'||me=='e'||me=='i'||me=='o'||me=='u')
	{
		printf("Vowel");
	}
	else{
		printf("Consonent");
	}
	return 0;
}
