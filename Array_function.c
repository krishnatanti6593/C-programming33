#include <stdio.h>

int sum(int *ptr, int n)
{
    int i, total = 0;

    for (i = 0; i < n; i++)
    {
        total = total + *(ptr + i);
    }

    return total;
}

int main()
{
    int arr[5], i, result;

    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = sum(arr, 5);

    printf("Sum = %d", result);

    return 0;
}
