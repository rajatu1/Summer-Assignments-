#include <stdio.h>
#include <string.h>

#define MAX_ROOMS 5

void initializeRooms(int rooms[], char names[][50]);
void bookRoom(int rooms[], char names[][50]);
void viewRooms(int rooms[], char names[][50]);
void checkoutRoom(int rooms[], char names[][50]);

int main() {
    int rooms[MAX_ROOMS];
    char names[MAX_ROOMS][50];
    int choice;

    initializeRooms(rooms, names);

    do {
        printf("--- Hotel Management System ---\n");
        printf("1. Book a Room\n");
        printf("2. View Room Status\n");
        printf("3. Check-out & Bill\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch(choice) {
            case 1:
                bookRoom(rooms, names);
                break;
            case 2:
                viewRooms(rooms, names);
                break;
            case 3:
                checkoutRoom(rooms, names);
                break;
            case 4:
                printf("Exiting system...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n\n");
        }
    } while(choice != 4);

    return 0;
}

void initializeRooms(int rooms[], char names[][50]) {
    int i;
    for(i = 0; i < MAX_ROOMS; i++) {
        rooms[i] = 0;
        strcpy(names[i], "Empty");
    }
}

void bookRoom(int rooms[], char names[][50]) {
    int roomNum;
    printf("Enter room number (1-%d) to book: ", MAX_ROOMS);
    scanf("%d", &roomNum);

    if(roomNum < 1 || roomNum > MAX_ROOMS) {
        printf("Invalid room number.\n\n");
        return;
    }

    if(rooms[roomNum - 1] == 1) {
        printf("Room %d is already occupied by %s.\n\n", roomNum, names[roomNum - 1]);
    } else {
        printf("Enter guest name: ");
        scanf(" %[^\n]s", names[roomNum - 1]);
        rooms[roomNum - 1] = 1;
        printf("Room %d successfully booked for %s.\n\n", roomNum, names[roomNum - 1]);
    }
}

void viewRooms(int rooms[], char names[][50]) {
    int i;
    printf("--- Room Status ---\n");
    for(i = 0; i < MAX_ROOMS; i++) {
        printf("Room %d: Status: %s | Guest: %s\n", 
               i + 1, 
               (rooms[i] == 1) ? "Occupied" : "Available", 
               names[i]);
    }
    printf("\n");
}

void checkoutRoom(int rooms[], char names[][50]) {
    int roomNum;
    int days;
    float rate = 500.0;

    printf("Enter room number (1-%d) for checkout: ", MAX_ROOMS);
    scanf("%d", &roomNum);

    if(roomNum < 1 || roomNum > MAX_ROOMS) {
        printf("Invalid room number.\n\n");
        return;
    }

    if(rooms[roomNum - 1] == 0) {
        printf("Room %d is already empty.\n\n", roomNum);
    } else {
        printf("Enter number of days stayed: ");
        scanf("%d", &days);
        
        printf("\n--- Receipt ---\n");
        printf("Guest Name: %s\n", names[roomNum - 1]);
        printf("Room Number: %d\n", roomNum);
        printf("Total Days: %d\n", days);
        printf("Total Bill: $%.2f\n", days * rate);
        printf("---------------\n\n");

        rooms[roomNum - 1] = 0;
        strcpy(names[roomNum - 1], "Empty");
        printf("Checkout successful.\n\n");
    }
}