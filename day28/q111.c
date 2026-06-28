#include <stdio.h>

int main() {
    int seats[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int choice;
    int seat_number;

    do {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. View Available Seats\n");
        printf("2. Book a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nSeat Layout (0 = Available, 1 = Booked):\n");
                for (int i = 0; i < 10; i++) {
                    printf("Seat %d: [%d]  ", i + 1, seats[i]);
                    if ((i + 1) % 5 == 0) {
                        printf("\n");
                    }
                }
                break;

            case 2:
                printf("Enter seat number to book (1-10): ");
                scanf("%d", &seat_number);

                if (seat_number < 1 || seat_number > 10) {
                    printf("Invalid seat number! Please choose between 1 and 10.\n");
                } else if (seats[seat_number - 1] == 1) {
                    printf("Sorry, Seat %d is already booked!\n", seat_number);
                } else {
                    seats[seat_number - 1] = 1;
                    printf("Success! Seat %d has been booked for you.\n", seat_number);
                }
                break;

            case 3:
                printf("Thank you for using the ticket booking system. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}