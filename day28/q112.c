#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

int main() {
    struct Contact phonebook[100];
    int count = 0;
    int choice;
    char search_name[50];
    int found;

    do {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add New Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter Name: ");
                    scanf(" %[^\n]s", phonebook[count].name);
                    printf("Enter Phone Number: ");
                    scanf(" %s", phonebook[count].phone);
                    printf("Enter Email Address: ");
                    scanf(" %s", phonebook[count].email);
                    count++;
                    printf("Contact saved successfully!\n");
                } else {
                    printf("Phonebook storage is full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No contacts saved yet.\n");
                } else {
                    printf("\n--- Saved Contacts ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("Name: %s | Phone: %s | Email: %s\n", 
                               phonebook[i].name, phonebook[i].phone, phonebook[i].email);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No contacts saved yet.\n");
                } else {
                    printf("Enter Name to search: ");
                    scanf(" %[^\n]s", search_name);
                    found = 0;
                    for (int i = 0; i < count; i++) {
                        if (strcmp(phonebook[i].name, search_name) == 0) {
                            printf("\nContact Found:\n");
                            printf("Name: %s\nPhone: %s\nEmail: %s\n", 
                                   phonebook[i].name, phonebook[i].phone, phonebook[i].email);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Contact with Name '%s' not found.\n", search_name);
                    }
                }
                break;

            case 4:
                printf("Exiting Contact System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}