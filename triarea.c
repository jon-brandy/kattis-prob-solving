#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    double count = a * b / 2.0;
    printf("%.1lf\n", count);
    
    return 0;
}
