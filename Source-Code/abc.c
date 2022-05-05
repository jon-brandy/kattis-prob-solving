#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(long long int *arr)
{
    if(arr[0] > arr[1])
    {
        long long int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
    if(arr[1] > arr[2])
    {
        long long int temp = arr[1];
        arr[1] = arr[2];
        arr[2] = temp;
    }
    if(arr[0] > arr[1])
    {
        long long int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
}

int main(void)
{
    long long int arr[3];
    char var[4];
    scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);
    sort(arr);
    scanf("%s", var);
    printf("%lld %lld %lld\n", arr[var[0] - 'A'], arr[var[1] - 'A'], arr[var[2] - 'A']);
    //OUTPUT MENGGUNAKAN INDEX HASIL DARI ASCII

    return 0;
}
