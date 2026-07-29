#include <stdio.h>
int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        printf("%d", i);
        if(i != 1)
            printf(" x ");

        fact = fact * i;
    }

    printf(" = %lld", fact);
    return 0;
}