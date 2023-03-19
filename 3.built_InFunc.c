//Study built-in functions "gets()", "puts() ","getchar()", "putchar()" in C language about string & char process. And then write program to input and output of a string

// Output:

// Enter any string: hi everyone

// Result: hi everyone

#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    printf("Result: ");
    puts(str);

    return 0;
}


