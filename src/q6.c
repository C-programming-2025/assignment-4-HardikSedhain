// Write a C program that defines a structure called Student with members: name, roll number, 
// and marks. Prompt the user to enter data for one student and display the information.

#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() 
{
    struct Student s;
    printf("Enter name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
    return 0;
}