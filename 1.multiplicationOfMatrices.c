// Find multiplication of two matrices.

// Output:

// Enter 2-dimensional array size: 2  3
// Enter numbers for each element in two arrays: 
// 1 2 3 4 5 6 1 4 2 5 3 6

// Result after multiplication of two arrays:
//   	14 32                                                                                                                                       
//       32 77

// Hint: rule of multiplication for two arrays


#include <stdio.h>

int main()
{
    int i, j, k, m, n, p, q, sum = 0, c, d, first[10][10], second[10][10], multiply[10][10];

    printf("Enter the dimensions of the first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the first matrix: ");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the dimensions of the second matrix: ");
    scanf("%d%d", &p, &q);

    if (n != p)
        printf("Matrices with entered dimensions can't be multiplied with each other.");
    else
    {
        printf("Enter the elements of the second matrix: ");

        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++)
                scanf("%d", &second[c][d]);

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            {
                for (k = 0; k < p; k++)
                {
                    sum = sum + first[c][k] * second[k][d];
                }

                multiply[c][d] = sum;
                sum = 0;
            }
        }

        printf("Result after multiplication of two matrices:\n");
        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
                printf("%d\t", multiply[c][d]);

            printf("\n");
        }
    }

    return 0;
}

