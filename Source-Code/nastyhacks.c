#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	for(int i = 1; i <= T; i++)
	{
		int rev, exprev, cost, count = 0;
		scanf("%d %d %d", &rev, &exprev, &cost);
		count = rev + cost;
		if(count == exprev)
		{
			puts("does not matter");
		}
		else if(count < exprev)
		{
			puts("advertise");
		}
		else
		{
			puts("do not advertise");
		}
	}
	
	return 0;
}
