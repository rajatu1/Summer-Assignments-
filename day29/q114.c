#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100];
    int size = 0;
    int choice, element, position, i, found;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Search Element\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position (0 to %d): ", size);
                scanf("%d", &position);
                if (position < 0 || position > size || size >= 100) {
                    printf("Invalid position or array full!\n");
                } else {
                    printf("Enter element to insert: ");
                    scanf("%d", &element);
                    for (i = size; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = element;
                    size++;
                    printf("Element inserted successfully.\n");
                }
                break;

            case 2:
                if (size == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter position to delete (0 to %d): ", size - 1);
                    scanf("%d", &position);
                    if (position < 0 || position >= size) {
                        printf("Invalid position!\n");
                    } else {
                        for (i = position; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Element deleted successfully.\n");
                    }
                }
                break;

            case 3:
                if (size == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter element to search: ");
                    scanf("%d", &element);
                    found = -1;
                    for (i = 0; i < size; i++) {
                        if (arr[i] == element) {
                            found = i;
                            break;
                        }
                    }
                    if (found != -1) {
                        printf("Element found at index: %d\n", found);
                    } else {
                        printf("Element not found in the array.\n");
                    }
                }
                break;

            case 4:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array elements: ");
                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
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