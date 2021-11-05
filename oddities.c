#include <stdio.h>

int main(void)
{
	int T, T2;
	scanf("%d", &T);
	for(int i = 1; i <= T; i++)
	{
		scanf("%d", &T2);
		if(T2 % 2 == 0)
		{
			printf("%d is even\n", T2);
		}
		else
		{
			printf("%d is odd\n", T2);
		}
	}
	
	return 0;
}
