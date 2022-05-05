#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(long long int a, long long int b)
{
    long long int temp = a;
    a = b;
    b = temp;
    return;
}

int main(void)
{
    long long int N, M;
    scanf("%lld %lld", &N, &M);
    getchar();
    if(N > M)
    {
        swap(N, M);
        for(long long int i = M + 1; i < N + 2; i++)
        {
            printf("%lld\n", i);
        }
    }
    /*
    if((N >= 4 || N >= 2) && (M <= 4 || M <= 20))
    {
        for(long long int i = N + 1; i < M + 2; i++)
        {
            printf("%lld\n", i);
        }
    }
    */
   for(long long int i = N + 1; i < M + 2; i++)
    {
        printf("%lld\n", i);
    }
    
    return 0;
}
