// Write a C program that defines a structure Book with members: title, author, and price. 
// Allow the user to enter details of n books and then display all books whose price is above a 
// user-defined value.

#include <stdio.h>
struct Book 
{
    char title[50];
    char author[50];
    float price;
};
    int main() {
    struct Book b[10];
    int n, i;
    float limit;
    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Title: ");
        gets(b[i].title);
        printf("Author: ");
        gets(b[i].author);
        printf("Price: ");
        scanf("%f", &b[i].price);
        getchar();
    }
    printf("Enter price limit: ");
    scanf("%f", &limit);
    printf("\nBooks above price %.2f:\n", limit);
    for (i = 0; i < n; i++)
     {
        if (b[i].price > limit)
            printf("%s by %s - %.2f\n", b[i].title, b[i].author, b[i].price);
    }
    return 0;
}