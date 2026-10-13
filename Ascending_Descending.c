#include <stdio.h>

int main()
{
    int a[5], i, j, temp;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sort in ascending order
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Display in Ascending order
    printf("\nAscending order:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    // Display in descending order
    printf("\n\nDescending order:\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}