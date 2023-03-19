// Calculate standard deviation by C program
// Output:
// Enter size of the array: 8
// Enter numbers for each element: 10  12  23  23  16  23  21  16

// Result of Standard Deviation: 4.8989794855664

// Hint: calculation equation is as follows

  	
// Where μ is mean value

// As below is the online S.D. calculator for your program debugging 

// https://www.calculator.net/standard-deviation-calculator.html?numberinputs=10%2C+12%2C+23%2C+23%2C+16%2C+23%2C+21%2C+16&ctype=p&x=82&y=17


#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float a[10], sum = 0, mean, deviation, variance = 0, standard_deviation;

    printf("Enter size of the array:");
    scanf("%d", &n);

    printf("Enter numbers for each element: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++)
        variance += pow(a[i] - mean, 2);

    variance /= n;
    standard_deviation = sqrt(variance);

    printf("Result of Standard Deviation: %f", standard_deviation);

    return 0;
}

