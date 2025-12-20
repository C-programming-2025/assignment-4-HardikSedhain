// Write a C program that counts the number of characters, words, and lines in a text file.

#include <stdio.h>
int main() 
{
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 1;
    fp = fopen("output.txt", "r");
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ' || ch == '\n')
            words++;
        if (ch == '\n')
            lines++;
    }
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n",
           chars, words + 1, lines);
    return 0;
}