#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	int arr[T], hasil = 0;
	for(int i = 1; i <= T; i++)
	{
		int count = 0;
		scanf("%d", &arr[i]);
		if(arr[i] < 0)
		{
			count = count + arr[i];
			hasil = hasil + (count*-1);
		}
	}
	printf("%d", hasil);
	
	return 0;
}
