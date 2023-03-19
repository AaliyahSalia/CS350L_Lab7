// Study functions "strcpy()" and "strrev()" in C language, and then write a program to check if a string is palindrome or not

// Output: 
// Enter a string: abc

// Result: not a palindrome string

// Enter a string: radar

// Result: yes, it is a palindrome string

// Hint: other examples of palindrome word, such as 

// refer, level, mom, madam, rotor, … …

#include <stdio.h>
#include <string.h>

void reverse(char* str);

int main()
{
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1;
    reverse(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Result: not a palindrome string");
    else
        printf("Result: yes, it is a palindrome string");

    return 0;
}

void reverse(char* str)
{
    int i, len;
    char temp;

    len = strlen(str) - 1;

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
