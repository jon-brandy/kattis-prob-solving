#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d\n%d", &a, &b);
	if(a > 0 && b > 0)
	{
		printf("1\n");
	}
	else if(a > 0 && b < 0)
	{
		printf("4\n");
	}
	else if(a < 0 && b > 0)
	{
		printf("2\n");
	}
	else if(a < 0 && b < 0)
	{
		printf("3\n");
	}
	return 0;
}
