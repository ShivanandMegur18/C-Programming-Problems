#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    int i, sum = 0;
    int largest, smallest;
    float average;

    ptr = arr;

    // Input array elements
    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    // Display array elements using pointers
    printf("\nArray elements are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    // Calculate sum
    for (i = 0; i < 5; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("\n\nSum = %d", sum);

    // Calculate average
    average = (float)sum / 5;

    printf("\nAverage = %.2f", average);

    // Find largest and smallest elements
    largest = *ptr;
    smallest = *ptr;

    for (i = 1; i < 5; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }

        if (*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }
    }

    printf("\nLargest element = %d", largest);
    printf("\nSmallest element = %d", smallest);

    // Display elements in reverse order
    printf("\n\nArray in reverse order:\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
