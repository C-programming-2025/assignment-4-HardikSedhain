// Write a C program that uses a structure Point with members x and y, representing coordinates. 
// Write a function that takes two Point structures and returns the distance between them.

#include <stdio.h>
#include <math.h>
struct Point {
    float x, y;
};
float distance(struct Point p1, struct Point p2) {
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}
int main() 
{
    struct Point a, b;
    printf("Enter point 1 (x y): ");
    scanf("%f %f", &a.x, &a.y);
    printf("Enter point 2 (x y): ");
    scanf("%f %f", &b.x, &b.y);
    printf("Distance = %.2f\n", distance(a, b));
    return 0;
}