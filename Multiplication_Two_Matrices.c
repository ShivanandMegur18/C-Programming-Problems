#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], mul[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
        r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter first matrix elements:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix elements:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize multiplication matrix
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            mul[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication of two matrices:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
