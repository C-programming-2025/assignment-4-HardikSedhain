// Write a C program that copies the contents of one file to another file.

#include <stdio.h>
int main() 
{
    FILE *src, *dest;
    char ch;
    src = fopen("output.txt", "r");
    dest = fopen("copy.txt", "w");
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);
    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");
    return 0;
}
