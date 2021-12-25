#include <stdio.h>

int count = 0, count2 = 0, i = 1;
int max(int a, int b, int c, int d)
{
    if(a + b + c + d > count)
    {
        count = a + b + c + d;
        count2 = i;
    }
    return count, count2;
}

int main(void)
{
    for(i = 1; i <= 5; i++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        max(a, b, c, d);
    }
    printf("%d %d", count2, count);
    puts("");
    count = 0, count2 = 0, i = 1;
 
    


    return 0;
}
