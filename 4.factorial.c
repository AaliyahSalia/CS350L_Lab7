// Find factorial of a number using recursion

// Output: 
// Enter a number: 5 

// Factorial=120


#include <stdio.h>

int factorial(int n);

int main()
{
    int n, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    fact = factorial(n);
    printf("Factorial=%d", fact);

    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
