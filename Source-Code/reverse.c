#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    int arr[T];
    for(int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for(int i = T - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
