// Write a C program that dynamically allocates memory for a string entered by the user and finds its length using pointers.

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char *str;
    int i = 0;
    str = (char *)malloc(100 * sizeof(char));
    printf("Enter a string: ");
    gets(str);
    while (*(str + i) != '\0')
        i++;
    printf("Length of string: %d\n", i);
    free(str);
    return 0;
}