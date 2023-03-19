// Write a program to remove the duplicate element in an array

// Output:
// Enter size of the array:5
// Enter numbers for each element: 3  3  4  6  4

// Results of removing duplicate: 3  4  6

// Hint: sort the array first, and then shift array if there is a duplicate element

#include <stdio.h>

int main()
{
    int i, j, k, n, a[10], unique[10], count = 0, is_duplicate;

    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter numbers for each element: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        is_duplicate = 0;
        for (j = 0; j < count; j++)
        {
            if (a[i] == unique[j])
            {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate)
        {
            unique[count] = a[i];
            count++;
        }
    }

    printf("Results of removing duplicate: ");
    for (i = 0; i < count; i++)
    {
        a[i] = unique[i];
        printf("%d ", a[i]);
    }

    return 0;
}
