// Write a C program that checks if a given string is a palindrome using pointers.

#include <stdio.h>
#include <string.h>
int main()
 {
    char str[100];
    char *start, *end;
    printf("Enter a string: ");
    gets(str);
    start = str;
    end = str + strlen(str) - 1;
    while (start < end) 
    {
        if (*start != *end) {
            printf("Not a palindrome\n");
            return 0;
        }
        start++;
        end--;
    }
    printf("Palindrome\n");
    return 0;
}