#include <stdio.h>

// INTINYA NANYA UNTUK BULAN SELANJUTNYA BISA SISA BERAPA
// KALAU MAKE METODE BULAN SEBELUMNYA
// MAKANYA RUMUSNYA (T + 1) *mega - sum
int main(void)
{
    int mega;
    scanf("%d", &mega);
    int T, T2;
    scanf("%d", &T);
    int sum = 0; // total penggunaan bulan ini
    for(int i = 1; i <= T; i++)
    {
        scanf("%d", &T2);
        sum = sum + T2;
    }
    int hitung = ((T + 1) * mega) - sum;
    printf("%d\n", hitung);

    return 0;
}
