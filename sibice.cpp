#include <stdio.h>

int main(void)
{
    int T, T2, W, H;
    scanf("%d %d %d", &T, &W, &H);
    for(int i = 1; i <= T; i++)
    {
        scanf("%d", &T2);
        int dimensi = (W * W) + (H * H);
        if(T2 * T2 > dimensi)
        {
            printf("NE\n");
        }
        else
        {
            printf("DA\n");
        }
    }

    return 0;
}
