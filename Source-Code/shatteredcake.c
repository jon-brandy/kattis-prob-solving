#include <stdio.h>

int main(void)
{
    int width;
    scanf("%d", &width);
    int T, lebar, panjang, sum;
    int count = 0;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++)
    {
        scanf("%d %d", &lebar, &panjang);
        sum = lebar * panjang;
        count = count + sum;
    }
    int total = count / width;
    printf("%d", total);
    return 0;
}
