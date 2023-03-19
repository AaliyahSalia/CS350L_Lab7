// Merging one-dimensional array - excluding repeating element

// Output:
// Enter the size of 1st array: 3
// Enter each element:  3  5  7
// Enter the size of 2nd  array: 3
// Enter each element:  2  5  9

// Result of merging:  3 5 7 2 9

#include <stdio.h>

int main()
{
    int i, j, k, m, n, p, q, sum = 0, c, d, first[10], second[10], merge[20];

    printf("Enter the size of 1st array: ");
    scanf("%d", &m);
    printf("Enter each element: ");

    for (c = 0; c < m; c++)
        scanf("%d", &first[c]);

    printf("Enter the size of 2nd  array: ");
    scanf("%d", &n);
    printf("Enter each element: ");

    for (c = 0; c < n; c++)
        scanf("%d", &second[c]);

    for (c = 0; c < m; c++)
        merge[c] = first[c];

    for (c = 0; c < n; c++)
        merge[c + m] = second[c];

    for (c = 0; c < m + n; c++)
    {
        for (d = c + 1; d < m + n; d++)
        {
            if (merge[c] == merge[d])
            {
                for (k = d; k < m + n; k++)
                    merge[k] = merge[k + 1];
                n--;
                d--;
            }
        }
    }

    printf("Result of merging: ");
    for (c = 0; c < m + n; c++)
        printf("%d ", merge[c]);

    return 0;
}

