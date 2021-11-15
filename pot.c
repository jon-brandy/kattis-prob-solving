#include <stdio.h>
#include <math.h>

int main(void)
{
	int T, T2;
	scanf("%d", &T);
	getchar();
	int hasil = 0, count = 0;
	for(int i = 1; i <= T; i++)
	{
		scanf("%d", &T2);
		int pangkat = T2 % 10;
		int angka =  T2  / 10;
		hasil = pow(angka, pangkat);
		count = count + hasil;
	}
	printf("%d\n", count);
	
	
	return 0;
}
