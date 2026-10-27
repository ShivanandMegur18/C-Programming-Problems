#include <stdio.h>
#include <limits.h>

int main()
{
int arr[] = {10, 25, 8, 40, 30};
int n = sizeof(arr) / sizeof(arr[0]);


int smallest = INT_MAX;
int second = INT_MAX;

for (int i = 0; i < n; i++)
{
    if (arr[i] < smallest)
    {
        second = smallest;
        smallest = arr[i];
    }
    else if (arr[i] < second && arr[i] != smallest)
    {
        second = arr[i];
    }
}

if (second == INT_MAX)
    printf("Second-smallest element does not exist.");
else
    printf("Second-smallest element = %d", second);

return 0;
}
