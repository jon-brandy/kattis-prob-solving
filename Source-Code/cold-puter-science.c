#include <stdio.h>

int main(void)
{
    int N, temp;
    scanf("%d", &N);
    int count = 0;
    for(int i = 1; i <= N; i++)
    {
        scanf("%d", &temp);
        if(temp < 0)
        {
            count++;
        }
    }
    printf("%d \n", count); 
    return 0;
}
