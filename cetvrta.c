#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

long long int checker(long long int *arr)
{
	if(arr[0] == arr[1])
	{
		return arr[2];
	}
	else if(arr[1] == arr[2])
	{
		return arr[0];
	}
	else if(arr[0] == arr[2])
	{
		return arr[1];
	}
	return 0;
}

int main(void)
{
	long long int arr[1001], arr2[1000];
	for(long long int i = 0; i < 3; i++)
	{
		scanf("%lld %lld", &arr[i], &arr2[i]);
	}
	printf("%lld %lld", checker(arr), checker(arr2));
	puts("");


	return 0;
}
