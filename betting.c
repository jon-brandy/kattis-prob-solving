#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int percent;
    scanf("%d", &percent);
    getchar();
    double result = 100 / (float)percent;
    double result2 = 100 / (100 - (float)percent);
    printf("%.3lf\n%.3lf", result, result2);

    return 0;
}
