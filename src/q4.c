// Write a C program that dynamically allocates memory for an integer array of size n, where n is entered by the user. Prompt the user to enter n elements and display them using pointers.

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n, i;
    int *arr;
    printf("Enter size of array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", arr + i);
    printf("Array elements:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    free(arr);
    return 0;
}