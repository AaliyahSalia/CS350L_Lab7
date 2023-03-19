// Write a program to print binomial coefficient table

// Output:
// Enter the order of binomial power expression: 3

// Results of printing on monitor: 
// 1
// 1 1
// 1 2 1
// 1 3 3 1

// Enter the order of binomial power expression: 6
	
// Results of printing on monitor: 
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1

// Hint: binomial power expression is like 〖(1+x)〗^n= ∑_(k=0)^n▒〖(n¦k)x^k 〗 and binomial coefficients  (n¦k)=  n!/k!(n-k)!
// e.g	(1+x)^0=1 and coefficients: 1
// (1+x)^2=1+2x+ x^2 and coefficients: 1  2  1
// 	(1+x)^5=1+5x+ 〖10x〗^2+10x^3+5x^4+x^5 and coefficients: 1 5 10 10 5 1

#include <stdio.h>

// Function to calculate the binomial coefficient
int binomialCoeff(int n, int k)
{
    int i, coef = 1;
    for (i = 1; i <= k; i++)
    {
        coef *= (n - i + 1);
        coef /= i;
    }
    return coef;
}

int main()
{
    int i, j, n, coef;

    printf("Enter the order of binomial power expression: ");
    scanf("%d", &n);

    printf("Results of printing on monitor: \n");
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            coef = binomialCoeff(i, j);
            printf("%d ", coef);
        }
        printf("\n");
    }

    return 0;
}
