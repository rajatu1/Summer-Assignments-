#include <stdio.h>
#include <string.h>

struct Book {
    int accession_number;
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book library[100];
    int count = 0;
    int choice;
    int search_acc;
    int found;

    do {
        printf("\n--- Library Management System ---\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by Accession Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter Accession Number: ");
                    scanf("%d", &library[count].accession_number);
                    printf("Enter Book Title: ");
                    scanf(" %[^\n]s", library[count].title);
                    printf("Enter Author Name: ");
                    scanf(" %[^\n]s", library[count].author);
                    printf("Enter Price: ");
                    scanf("%f", &library[count].price);
                    count++;
                    printf("Book added successfully!\n");
                } else {
                    printf("Library database is full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No books available in the library.\n");
                } else {
                    printf("\n--- Library Books Inventory ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("Acc No: %d | Title: %s | Author: %s | Price: $%.2f\n", 
                               library[i].accession_number, library[i].title, library[i].author, library[i].price);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No books available to search.\n");
                } else {
                    printf("Enter Accession Number to search: ");
                    scanf("%d", &search_acc);
                    found = 0;
                    for (int i = 0; i < count; i++) {
                        if (library[i].accession_number == search_acc) {
                            printf("\nBook Found:\n");
                            printf("Accession No: %d\nTitle: %s\nAuthor: %s\nPrice: $%.2f\n", 
                                   library[i].accession_number, library[i].title, library[i].author, library[i].price);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Book with Accession Number %d not found.\n", search_acc);
                    }
                }
                break;

            case 4:
                printf("Exiting system. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}