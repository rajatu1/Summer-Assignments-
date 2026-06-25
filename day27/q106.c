#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};

int main() {
    struct Employee employees[100];
    int count = 0;
    int choice;
    int search_id;
    int found;

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].id);
                    printf("Enter Name: ");
                    scanf(" %[^\n]s", employees[count].name);
                    printf("Enter Designation: ");
                    scanf(" %[^\n]s", employees[count].designation);
                    printf("Enter Salary: ");
                    scanf("%f", &employees[count].salary);
                    count++;
                    printf("Employee profile added successfully!\n");
                } else {
                    printf("Database capacity reached!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("\n--- Employee Records ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("ID: %d | Name: %s | Designation: %s | Salary: $%.2f\n", 
                               employees[i].id, employees[i].name, employees[i].designation, employees[i].salary);
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    printf("No employee records found.\n");
                } else {
                    printf("Enter Employee ID to search: ");
                    scanf("%d", &search_id);
                    found = 0;
                    for (int i = 0; i < count; i++) {
                        if (employees[i].id == search_id) {
                            printf("\nEmployee Record Found:\n");
                            printf("ID: %d\nName: %s\nDesignation: %s\nSalary: $%.2f\n", 
                                   employees[i].id, employees[i].name, employees[i].designation, employees[i].salary);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Employee with ID %d not found.\n", search_id);
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