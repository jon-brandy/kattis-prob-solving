#include <stdio.h>
#include <math.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	// (2^T + 1) ^ 2
	int count = pow(2, T);
	int hitung = count + 1;
	int hasil = pow(hitung, 2);
	printf("%d\n", hasil);
	return 0;
}
