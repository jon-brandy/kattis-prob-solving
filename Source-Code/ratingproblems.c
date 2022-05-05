#include <stdio.h>

int main(void)
{
    double judge, answer, terjawab, kurang;
    scanf("%lf %lf", &judge, &answer);
    double max = 0.0, min = 0.0, sum = 0.0;
    for(int i = 1; i <= answer; i++)
    {
        scanf("%lf", &terjawab);
        sum = sum + terjawab;
    }
    kurang = judge - answer;
    min = (kurang * (-3) + sum) / judge;
    max = (kurang * (3) + sum) / judge;
    printf("%lf %lf", min, max);
    
    return 0;
}
