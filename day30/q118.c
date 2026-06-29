#include <stdio.h>

struct Book {
    char title[100];
    char author[50];
    int id;
};

int main() {
    struct Book library[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter details for Book %d\n", i + 1);
        printf("Enter title: ");
        scanf(" %[^\n]s", library[i].title);
        printf("Enter author: ");
        scanf(" %[^\n]s", library[i].author);
        printf("Enter Book ID: ");
        scanf("%d", &library[i].id);
        printf("\n");
    }

    printf("--- Library Inventory ---\n");
    for(i = 0; i < 3; i++) {
        printf("Book %d\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("ID: %d\n\n", library[i].id);
    }

    return 0;
}