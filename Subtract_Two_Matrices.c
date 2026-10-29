#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sub[10][10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r < 1 || r > 10 || c < 1 || c > 10)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtract the matrices
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of two matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}