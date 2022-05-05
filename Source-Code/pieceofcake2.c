#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int findMax(long long int a, long long int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

long long int count(long long int T, long long int horizontal, long long int vertical)
{
    return findMax(T - horizontal, horizontal) * findMax(T - vertical, vertical) * 4;
}

int main(void)
{
    long long int T, horizontal, vertical;
    scanf("%lld %lld %lld", &T, &horizontal, &vertical);
    long long int hasil = count(T, horizontal, vertical);
    printf("%lld\n", hasil);

    return 0;
}
