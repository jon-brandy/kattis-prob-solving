#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void checker(long long int penentu)
{
    if(!penentu)
    {
        puts("1");
    }
    else
    {
        puts("0");
    }
    return;
}

int main(void)
{
    char string[1001];
    scanf("%s", string);
    long long int arr[1001] = {0};
    long long int count = 0, penentu = 0;
    long long int panjang = strlen(string);
    for(long long int i = 0; i < panjang; i++)
    {
        long long int index = string[i] % 97;
        if(arr[index] == 0)
        {
            arr[index] = 1;
            count += 1;
        }
        else if(arr[index] == 1)
        {
            penentu = 1;
        }
    }
    checker(penentu);

    return 0;
}
