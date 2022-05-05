#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	getchar();
	for(int i = 1; i <= T; i++)
	{
		double a, b, c;
		scanf("%lf %lf %lf", &a, &b, &c);
		if((a + b == c || a - b == c) || (a * b == c || a / b == c))
		{
			printf("Possible\n");
		}
		else if((b + a == c || b - a == c) || (b * a == c || b / a == c))
		{
			puts("Possible");
		}
		else if(c > (int)c)
		{
			puts("Impossible");
		}
		else
		{
			puts("Impossible");
		}
	}
	
	return 0;
}
