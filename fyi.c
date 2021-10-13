#include <stdio.h>

int main(void)
{  
    char string[7];
    scanf("%s", string);
    if(string[0] == '5' && string[1] == '5' && string[2] == '5')
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
