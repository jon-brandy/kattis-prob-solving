#include <stdio.h>

int search(int T, int a, int arr[])
{
	for(int i = 0; i < T; i++)
	{
		if(arr[i] == a)
		{
			return 1;
		}
	}
	return 0;
}

int main(void)
{
	int T;
	scanf("%d", &T);
	int arr[T];
	int arr2[T - 1];
	for(int i = 0; i < T; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < T - 1; i++)
	{
		scanf("%d", &arr2[i]);
	}
	// NEGASI BIAR DPT YANG DICARI
	for(int i = 0; i < T; i++)
	{
		if(!search(T, arr[i], arr2))
		{
			printf("%d\n", arr[i]);
			return 0;
		}
	}
	
	return 0;
}
