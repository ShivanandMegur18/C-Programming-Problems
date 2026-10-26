#include <stdio.h>
#include <limits.h>

int main()
{
int arr[] = {10, 25, 8, 40, 30};
int n = sizeof(arr) / sizeof(arr[0]);

int largest = INT_MIN;
int second = INT_MIN;

for (int i = 0; i < n; i++)
{
    if (arr[i] > largest)
    {
        second = largest;
        largest = arr[i];
    }
    else if (arr[i] > second && arr[i] != largest)
    {
        second = arr[i];
    }
}

if (second == INT_MIN)
    printf("Second-largest element does not exist.");
else
    printf("Second-largest element = %d", second);

return 0;

}
