#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

long long int countIntersecVertices(long long int T)
{
    //DAH RUMUS PATENNYA
    // T - 1 / 4
    // T - 2 / 6
    // T - 3 / 24
    
    return T * (T - 1) * (T - 2) * (T - 3) / 24;
}

int main(void)
{
    long long int T;
    scanf("%lld", &T);
    long long int result = countIntersecVertices(T);
    printf("%lld\n", result);

    return 0;
}
