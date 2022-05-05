#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    long long int T;
    scanf("%lld", &T);
    long long int low, high, count = 1;
    scanf("%lld", &low);
    for(long long int i = 0; i < T - 1; i++)
    {
        scanf("%lld", &high);
        if(high > low)
        {
            count += 1;
        }
        low = high;
    }
    printf("%lld\n", count);

    return 0;
}
