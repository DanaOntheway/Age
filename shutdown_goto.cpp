#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	 char input[20]={0};
	 system("shutdown -s -t 60");
again:
     printf("Please note that your computer will shut down within 1 minute. Enter 'abc' to cancel the shutdown.");
     scanf("%s", input);
     if(strcmp(input, "abc") == 0)
     {
     	system("shutdown -a");
	 }
	 else
	 {
	 	goto again;
	 }
	 return 0;
}