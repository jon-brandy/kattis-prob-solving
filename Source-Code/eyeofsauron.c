#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    char string[1001];
    scanf("%s", string);
    getchar();
    long long int len = strlen(string);
    long long int count = 0, count2 = 0;
    if(len >= 4 && len <= 101)
    {
        for(long long int i = 0; i < len - 1; i++)
        {
            if(string[i] == '(' || string[i] == ')')
            {
                break;
            }
            else if(string[i] == '|')
            {
                count += 1;
            }
        }
        for(long long int i = len - 1; i >= 0; i--)
        {
            if(string[i] == '(' || string[i] == ')')
            {
                break;
            }
            else if(string[i] == '|')
            {
                count2 += 1;
            }
        }
    }
    
    if(count == count2)
    {
        puts("correct");
    }
    else
    {
        puts("fix");
    }


    return 0;
}
