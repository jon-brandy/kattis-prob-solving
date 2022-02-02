#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
   
    long long int arr[1001], isiMod[1001];
    long long int index = 0, count = 0;
    for(long long int i = 0; i < 10; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for(long long int i = 0; i < 10; i++)
    {
        long long int temp = arr[i] % 42;
        if(isiMod[temp] == 0)
        {
            isiMod[temp] = 1;
            count += 1;
        }
    }
    printf("%lld", count);
    puts("");

    return 0;
}
