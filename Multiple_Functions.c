#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main()
{
    int a, b, choice;

    printf("----- CALCULATOR -----\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition (+)");
    printf("\n2. Subtraction (-)");
    printf("\n3. Multiplication (*)");
    printf("\n4. Division (/)");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Result = %d\n", add(a, b));
            break;

        case 2:
            printf("Result = %d\n", subtract(a, b));
            break;

        case 3:
            printf("Result = %d\n", multiply(a, b));
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f\n", divide(a, b));
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}