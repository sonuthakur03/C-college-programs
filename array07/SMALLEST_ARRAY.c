#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, smallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
