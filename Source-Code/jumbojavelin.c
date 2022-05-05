#include <stdio.h>

int main(void)
{
	int T, T2;
	scanf("%d", &T);
	int count = 0;
	int hasil = 0;
	for(int i = 1; i <= T; i++)
	{
		scanf("%d", &T2);
		count = count + T2;
		hasil = count - (T - 1);
	}
	printf("%d",  hasil);
	
	return 0;
}
