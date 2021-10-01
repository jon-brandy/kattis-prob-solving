#include <stdio.h>

int main(void)
{
    int T, T2, tc;
    scanf("%d", &T);
    for(int i = 1; i<= T; i++)
    {
        scanf("%d", &T2);
        int hitung = -T2 + 1;
        for(int j = 1; j <= T2; j++)
        {
            scanf("%d", &tc);
            hitung = hitung + tc;
        }
        printf("%d\n", hitung);
    }

    return 0;
}
