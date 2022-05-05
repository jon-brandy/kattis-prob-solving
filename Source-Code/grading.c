#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void checker(long long int score, long long int a, long long int b, long long int c, long long int d, long long int e)
{
    if(score < d && score >= e)
    {
        puts("E");
    }
    else if(score >= d && score < c)
    {
        puts("D");
    }
    else if(score >= c && score < b)
    {
        puts("C");
    }
    else if(score >= b && score < a)
    {
        puts("B");
    }
    else if(score >= a)
    {
        puts("A");
    }
    else
    {
        puts("F");
    }
    return;
}

int main(void)
{
    long long int a, b, c, d, e;
    scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
    long long int score;
    scanf("%lld", &score);
    checker(score, a, b, c, d, e);


    return 0;
}
