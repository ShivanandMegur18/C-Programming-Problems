#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String without spaces: %s\n", str);

    return 0;
}