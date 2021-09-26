#include <stdio.h>
#include <string.h>

int main(void)
{

    char string1[1000], string2[1000];
    scanf("%s\n%s", string1, string2);
    if(strlen(string1) < strlen(string2))
    {
        printf("no\n");
    }
    else
    {
        printf("go\n");
    }
  
    return 0;
}
