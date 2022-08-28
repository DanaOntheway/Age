#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("**************************************\n");
	printf("********  1.play      0.exit  ********\n");
    printf("**************************************\n");
}


void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//生成1-100之间的随机数
	while(1)
	{
		printf("Please guess a number:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("Too Large\n");
		}
		else if(guess<ret)
		{
			
			printf("Too Small\n");
		}
		else
		{
			printf("Congradulations! You're right!");
		    break;	
		}
	}
}
int main()
{
	int input = 0;
    srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("CHOOSE>:");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
			     game();
			     break;
			case 0:
				printf("EXIT\n");
				break;
		}
	}while(input);
    return 0;
	
}