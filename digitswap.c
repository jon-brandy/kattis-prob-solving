#include <stdio.h>

int main(void)
{
	char a[2];
	scanf("%c%c", &a[0], &a[1]);
	printf("%c%c", a[1], a[0]);
	return 0;
}
