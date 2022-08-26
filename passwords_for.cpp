#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for(i=0; i<3; i++)
	{
		printf("Please enter a password:>");
		scanf("%s", password);
		if(strcmp(password, "20220826") == 0)
		{
			printf("Login Succeeded!\n");
			break;
		}
		else
		{
			printf("Incorrect Password\n");
		}
	}
	if (i==3)
	   printf("Exit Program\n");
	   return 0;
}