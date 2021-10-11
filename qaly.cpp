#include <stdio.h>

int main(void)
{   
    int T;
    double T2, T3;
    scanf("%d", &T);
    double count = 0.0;
    for(int i = 1; i <= T; i++)
    {
        scanf("%lf %lf", &T2, &T3);
        double hitung = T2 * T3;
        count = count + hitung;
    }
    
    printf("%.3lf\n", count);

    return 0;
}
