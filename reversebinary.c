#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//function to convert integer to binary
char* intToBinary(long long int n)
{
    char *binary = (char*)malloc(sizeof(char)*32);
    long long int i = 0;
    while(n > 0)
    {
        binary[i] = (n % 2) + '0';
        n = n / 2;
        i++;
    }
    binary[i] = '\0';
    return binary;
}

int main(void)
{
    long long int num;
    scanf("%lld", &num);
    char *binary = intToBinary(num);
    //reverse the binary string
    char *revBinary = (char*)malloc(sizeof(char)*32);
    int i = 0;
    while(binary[i] != '\0')
    {
        revBinary[i] = binary[strlen(binary) - i - 1];
        i++;
    }
    revBinary[i] = '\0';
    //convert the reversed binary string to integer
    long long int revNum = 0;
    i = 0;
    while(revBinary[i] != '\0')
    {
        revNum = revNum + (revBinary[i] - '0') * pow(2, i);
        i++;
    }
    printf("%lld", revNum);

    return 0;
}
