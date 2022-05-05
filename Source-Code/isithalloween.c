#include <stdio.h>
#include <string.h>

bool check(char *string)
{
    if((strcmp(string, "OCT 31") == 0) || (strcmp(string, "DEC 25") == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    char string[1001];
    scanf("%[^\n]", string);
    getchar();
    if(check(string))
    {
        printf("yup\n");
    }
    else
    {
        printf("nope\n");
    }

    return 0;
}
