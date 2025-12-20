// Write a C program to create a file and write a user-entered string into it. Then display a 
// message confirming that the file has been written successfully.

#include <stdio.h>
int main() 
{
    FILE *fp;
    char str[100];
    fp = fopen("output.txt", "w");
    printf("Enter a string: ");
    gets(str);
    fputs(str, fp);
    fclose(fp);
    printf("File written successfully.\n");
    return 0;
}