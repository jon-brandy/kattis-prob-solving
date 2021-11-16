#include <stdio.h>

int main(void)
{
	int num, num2;
	scanf("%d %d", &num, &num2);
	// buat dapetin angka kebalik
	int angka = (num % 10) * 100 + ((num / 10) % 10) * 10 + num / 100; // ratusan puluhan satuan
	int angka2 = (num2 % 10) * 100 + ((num2 / 10) % 10) * 10 + num2 / 100;
	if(angka > angka2)
	{
		printf("%d\n", angka);
	}
	else
	{
		printf("%d\n", angka2);
	}
	
	
	return 0;
}
