#include <stdio.h>
#include <string.h>

bool hissChecker(char *string)
{
    if(strstr(string, "ss"))
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
    char string[31];
    scanf("%s", string);
    if(hissChecker(string))
    {
        printf("hiss\n");
    }
    else
    {
        printf("no hiss\n");
    }

    return 0;
}
