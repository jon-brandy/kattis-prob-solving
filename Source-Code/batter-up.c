#include <stdio.h>

int main(void)
{
    int T, N;
    scanf("%d", &T);
    int count = 0;
    double sum = 0.0;
    for(int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        if(N >= 0)
        {
            sum = sum + N;
            count++;
        }
    }
    double hasil = sum / count;
    printf("%.10lf", hasil);

    return 0;
}
