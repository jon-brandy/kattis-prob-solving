#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	double hasil = 0, hasil2 = 0;
	for(int i = 1; i <= T; i++)
	{
		double b, p, count = 0, selisihJumlah = 0;
		scanf("%lf %lf", &b, &p);
		count = (60.0 * b) / p;
		selisihJumlah = 60.0 / p;
		hasil = hasil + (count - selisihJumlah);
		hasil2 = hasil2 + (count + selisihJumlah);
		printf("%.4lf %.4lf %.4lf\n", hasil, count, hasil2);
		hasil = 0, hasil2 = 0, count = 0;
	}
	
	
	return 0;
}
