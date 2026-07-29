#include <stdio.h>
int main()
{
    int arr[4], i, sum = 0;

    printf("Enter 4 numbers:\n");

    for(i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);
    return 0;
}