#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    long long int T, T2, tc;
    scanf("%lld", &T);
    long long int count = 0, arr[1001] = {0};
    while(T-- && count < 1001) // sama bae kek for loop
    {
        scanf("%lld %lld", &T2, &tc);
        for(long long int i = T2 - 1; i < tc; i++) //dibknin min 1 karna array
        {
            if(arr[i] == 1)
            {
                continue;
            }
            else
            {
                arr[i] = 1;
                count += 1;
            }
        }
    }
    printf("%lld\n", count);

    return 0;
}
