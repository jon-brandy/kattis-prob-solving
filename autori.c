#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[255];
    scanf("%s", string);
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] >= 65 && string[i] <= 90)
        {
            printf("%c", string[i]);
        }
    }

    return 0;
}
