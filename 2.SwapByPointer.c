// Swap two numbers by pointer

// Output:

// Enter two numbers a & b: 2  3

// After swapping by pointer, a = 3, b=2

#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int a, b;

    printf("Enter two numbers a & b: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping, a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping by pointer, a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
