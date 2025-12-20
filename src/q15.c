// Write a C program that stores student records (name, roll number, and marks) into a 
// file and then reads and displays all stored records.

#include <stdio.h>
struct Student 
{
    char name[50];
    int roll;
    float marks;
};
int main() 
{
    FILE *fp;
    struct Student s;
    int n, i;
    fp = fopen("students.txt", "w");
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) 
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        gets(s.name);
        printf("Roll: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);
        getchar();
        fwrite(&s, sizeof(s), 1, fp);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    printf("\nStored Student Records:\n");
    while (fread(&s, sizeof(s), 1, fp))
        printf("%s %d %.2f\n", s.name, s.roll, s.marks);
    fclose(fp);
    return 0;
}