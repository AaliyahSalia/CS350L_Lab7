// Generate a program for finding the desired kth smallest element in an array

// Output:
// Enter size of the array:7
// Enter numbers for each element: 3  3  4  6  4  3  7
// Enter desired kth smallest element: 3

// Result of 3 smallest element: 6

#include <stdio.h>

void quickSort(int arr[], int left, int right);

int main()
{
    int n, k, i;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter numbers for each element: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter desired kth smallest element: ");
    scanf("%d", &k);

    quickSort(arr, 0, n-1);

    printf("Result of %d smallest element: %d\n", k, arr[k-1]);

    return 0;
}

void quickSort(int arr[], int left, int right)
{
    int i = left, j = right, pivot = arr[(left + right) / 2], temp;

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}
