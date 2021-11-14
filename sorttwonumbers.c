#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int min = a;
    if(min > b)
    {
        printf("%d %d", b , min);
    }
    else
    {
        printf("%d %d", min , b);
    }

    return 0;
}
