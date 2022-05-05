#include <stdio.h>
#include <string.h>

int main(void)
{   
    char string[255];
    scanf("%s", string);
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] != string[i + 1])
        {
            printf("%c", string[i]);
        }
    }
    return 0;
}
