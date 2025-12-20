// Write a C program that defines a structure Car with members: model, year, and mileage. 
// Store information for 3 cars and find the car with the lowest mileage.

#include <stdio.h>
struct Car 
{
    char model[50];
    int year;
    float mileage;
};
int main() 
{
    struct Car c[3];
    int i, min = 0;
    for (i = 0; i < 3; i++) {
        printf("\nCar %d\n", i + 1);
        printf("Model: ");
        gets(c[i].model);
        printf("Year: ");
        scanf("%d", &c[i].year);
        printf("Mileage: ");
        scanf("%f", &c[i].mileage);
        getchar();
    }
    for (i = 1; i < 3; i++) {
        if (c[i].mileage < c[min].mileage)
            min = i;
    }
    printf("\nCar with lowest mileage:\n");
    printf("%s (%d) - %.2f\n", c[min].model, c[min].year, c[min].mileage);
    return 0;
}