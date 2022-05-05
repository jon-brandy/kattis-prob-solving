#include <stdio.h>
#include <string.h>

int main(void)
{
    char string[1001];
    scanf("%s", string);
    int count = 0;
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] == 'e')
        {
            count = count + 1;
        }
    }
    printf("h");
    for(int j = 1; j <= count * 2; j++)
    {
        printf("e");
    }
    printf("y");

    return 0;
}
