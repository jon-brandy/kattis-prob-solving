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
        n /= 2;
        i += 1;
    }
    binary[i] = '\0';
    return binary;
}

int main(void)
{
    long long int num;
    scanf("%lld", &num);
    char *binary = intToBinary(num);
	//printf("%s\n", binary);
    //reverse the binary string
    char *revBinary = (char*)malloc(sizeof(char)*32);
    long long int i = 0;
    while(binary[i] != '\0')
    {
        revBinary[i] = binary[strlen(binary) - i - 1];
        i += 1;
    }
    revBinary[i] = '\0';
	//printf("%s\n", revBinary);
    //convert the reversed binary string to integer
    long long int revNum = 0;
    i = 0;
    while(revBinary[i] != '\0')
    {
        revNum += (revBinary[i] - '0') * pow(2, i);
        i += 1;
    }
    printf("%lld", revNum);

    return 0;
}
