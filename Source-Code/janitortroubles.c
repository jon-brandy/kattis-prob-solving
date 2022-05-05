#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    //DAH RUMUS PATENNYA
    double count = (a + b + c + d) / 2.0;
    double hasil = sqrt((count - a) * (count - b) * (count - c) * (count - d));
    printf("%.6lf", hasil);
    puts("");
    return 0;
}
