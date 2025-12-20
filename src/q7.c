// Write a C program that defines a structure Employee with members: name, employee ID, and salary. 
// Take input for 5 employees and display the details of the employee with the highest salary.

#include <stdio.h>
struct Employee 
{
    char name[50];
    int id;
    float salary;
};
int main() 
{
    struct Employee e[5];
    int i, max = 0;
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: ");
        gets(e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        getchar();
    }
    for (i = 1; i < 5; i++) {
        if (e[i].salary > e[max].salary)
            max = i;
    }
    printf("\nHighest Salary Employee:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n",
           e[max].name, e[max].id, e[max].salary);
    return 0;
}