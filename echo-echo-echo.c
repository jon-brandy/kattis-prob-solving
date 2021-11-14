#include <stdio.h>

int main(void)
{
    char string[255];
    scanf("%s", string);
    for(int i = 1; i <= 3; i++)
    {
        printf("%s ", string);
    }
    return 0;
}
