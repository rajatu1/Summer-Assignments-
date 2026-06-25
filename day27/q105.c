#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    struct Student students[100];
    int count = 0;
    int choice;
    int search_roll;
    int found;

    do {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter Roll Number: ");
                    scanf("%d", &students[count].roll_number);
                    printf("Enter Name: ");
                    scanf(" %[^\n]s", students[count].name);
                    printf("Enter Marks: ");
                    scanf("%f", &students[count].marks);
                    count++;
                    printf("Record added successfully!\n");
                } else {
                    printf("Database is full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\n--- Student Records ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("Roll No: %d | Name: %s | Marks: %.2f\n", 
                               students[i].roll_number, students[i].name, students[i].marks);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No records found.\n");
                } else {
                    printf("Enter Roll Number to search: ");
                    scanf("%d", &search_roll);
                    found = 0;
                    for (int i = 0; i < count; i++) {
                        if (students[i].roll_number == search_roll) {
                            printf("\nRecord Found:\n");
                            printf("Roll No: %d\nName: %s\nMarks: %.2f\n", 
                                   students[i].roll_number, students[i].name, students[i].marks);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Student with Roll Number %d not found.\n", search_roll);
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