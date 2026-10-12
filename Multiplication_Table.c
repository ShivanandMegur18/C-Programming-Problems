#include <stdio.h>

int main()
{
    int num, i, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for (i = 1; i <= 10; i++)
    {
        result = num * i;

        printf("%d x %d = %d\n", num, i, result);
    }

    return 0;
}
