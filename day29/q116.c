#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    double price;
};

int main() {
    struct Item inventory[100];
    int count = 0;
    int choice, id, i, found;

    while (1) {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display Inventory\n");
        printf("3. Search Item by ID\n");
        printf("4. Update Item Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= 100) {
                    printf("Inventory is full!\n");
                } else {
                    printf("Enter Item ID: ");
                    scanf("%d", &inventory[count].id);
                    getchar();
                    printf("Enter Item Name: ");
                    fgets(inventory[count].name, sizeof(inventory[count].name), stdin);
                    inventory[count].name[strcspn(inventory[count].name, "\n")] = '\0';
                    printf("Enter Quantity: ");
                    scanf("%d", &inventory[count].quantity);
                    printf("Enter Price: ");
                    scanf("%lf", &inventory[count].price);
                    count++;
                    printf("Item added successfully.\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("Inventory is empty.\n");
                } else {
                    printf("\nID\tName\t\tQuantity\tPrice\n");
                    printf("---------------------------------------------\n");
                    for (i = 0; i < count; i++) {
                        printf("%d\t%-15s\t%d\t\t$%.2lf\n", 
                               inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("Inventory is empty.\n");
                } else {
                    printf("Enter Item ID to search: ");
                    scanf("%d", &id);
                    found = 0;
                    for (i = 0; i < count; i++) {
                        if (inventory[i].id == id) {
                            printf("\nItem Found:\n");
                            printf("ID: %d\nName: %s\nQuantity: %d\nPrice: $%.2lf\n", 
                                   inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Item with ID %d not found.\n", id);
                    }
                }
                break;

            case 4:
                if (count == 0) {
                    printf("Inventory is empty.\n");
                } else {
                    printf("Enter Item ID to update: ");
                    scanf("%d", &id);
                    found = 0;
                    for (i = 0; i < count; i++) {
                        if (inventory[i].id == id) {
                            printf("Current Quantity: %d\n", inventory[i].quantity);
                            printf("Enter New Quantity: ");
                            scanf("%d", &inventory[i].quantity);
                            printf("Quantity updated successfully.\n");
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Item with ID %d not found.\n", id);
                    }
                }
                break;

            case 5:
                printf("Exiting system.\n");
                exit(0);

            default:
                printf("Invalid choice! Please select between 1 and 5.\n");
        }
    }

    return 0;
}