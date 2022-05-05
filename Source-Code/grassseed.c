#include <stdio.h>

int main(void)
{
	double seedCost, T, hasil = 0.0;
	scanf("%lf", &seedCost);
	scanf("%lf", &T);
	for(int i = 1; i <= T; i++)
	{
		double a, b, count = 0.0;
		scanf("%lf %lf", &a, &b);
		count = a * b;
		hasil = hasil +  count;
	}
	printf("%.6lf", hasil*seedCost);
	
	return 0;
}
