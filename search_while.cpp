#include <stdio.h>
int main()
{
	int arr[] = {1,3,6,9,11,12,13,55,56,59};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int k = 0;
	int left = 0;
	int right = sz-1;
	scanf("%d", &k);
	while(left<=right)
	{
		int mid = (left + right)/2;
		if(arr[mid]>k)
		{
			right = mid - 1;
		}
		else if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
		 printf("It is %d\n", mid);
		 break;	
		}
	}
	if (left>right)
	{
		printf("Can not find it\n");
	}
	return 0;
}