#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	getchar();
	int arr[T], count = 0;
	for(int i = 0; i < T; i++)
	{
		scanf("%d", &arr[i]);
		count = count + arr[i];
	}
	printf("%d\n", count);
	
	return 0;
}
