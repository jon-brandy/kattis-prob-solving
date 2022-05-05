#include <stdio.h>
#include <math.h>

int main(void)
{
	double T;
	scanf("%lf", &T);
	double count = sqrt(T);
	double lengthFence = count * 4;
	printf("%.6lf\n", lengthFence);
	
	return 0;
}
