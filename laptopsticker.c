#include <stdio.h>

int main(void)
{
	int p, s, ps, ss;
	scanf("%d %d %d %d", &p, &s, &ps, &ss);
	// + 2 karena masing" sisi ada 1 cm sisa
	if(p >= ps + 2 && s >= ss + 2)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	
	return 0;
}
