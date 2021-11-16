#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	for(int i = 1; i <= T; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int count = 0, hasil = 0;
		for(int j = 1; j <= b; j++)
		{
			count = count + j;
		}
		hasil = hasil + (count + b);
		printf("%d %d\n", a, hasil);
	}
	
	return 0;
}
