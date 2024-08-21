#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, min, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The smallest number in the array is: %d\n", min);
    printf("The largest number in the array is: %d\n", max);

    return 0;
}
