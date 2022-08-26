#include <stdio.h>

int main()
{
	int age = 21;
	if(age<1)
	   printf("infant\n");
	else if(age>=1 && age<3)
	   printf("toddler\n");
	else if(age>=3 && age<13)
	   printf("children\n"); 
	else if(age>=13 && age<18)
	   printf("adolescent\n"); 
	else if(age>=18 && age<24)
	   printf("young adults\n");
	else if(age>=24 && age<45)
	   printf("adults\n"); 
	else if(age>=45 && age<60)
	   printf("middle age\n"); 
	else if(age>=60)
	   printf("seniors\n");    
	return 0;
}