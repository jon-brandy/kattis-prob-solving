#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int count = a * (b - 1) + 1;
	printf("%d\n", count);
	
	return 0;
}
