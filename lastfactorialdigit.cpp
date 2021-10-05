#include  <stdio.h>

int main(void)
{
	int T, T2;
	scanf("%d", &T);
	for(int i = 1; i <= T; i++)
	{
		int hitung = 1;
		scanf("%d", &T2);
		for(int j = 1; j <= T2; j++)
		{
			hitung = hitung * j;
		}
		if(hitung > 10)
		{
			printf("%d\n", hitung % 10);
		}
		else
		{
			printf("%d\n", hitung);
		}
	}
	
	return 0;
}
