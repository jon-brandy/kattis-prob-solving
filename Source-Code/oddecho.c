#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	getchar();
	char string[225];
	for(int i = 1; i <= T; i++)
	{
		scanf("%s", string);
		getchar();
		if(i % 2 == 1)
		{
			printf("%s\n", string);
		}	
	}
	
	return 0;
}
