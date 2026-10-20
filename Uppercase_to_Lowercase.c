#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a uppercase sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lowercase sentence: %s", str);

    return 0;
}