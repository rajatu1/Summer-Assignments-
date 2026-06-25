#include <stdio.h>

struct SalaryRecord {
    int emp_id;
    char name[50];
    float basic_salary;
    float hra;
    float da;
    float gross_salary;
};

int main() {
    struct SalaryRecord employees[100];
    int count = 0;
    int choice;

    do {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Employee Salary Details\n");
        printf("2. Display All Salary Slips\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 100) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].emp_id);
                    printf("Enter Name: ");
                    scanf(" %[^\n]s", employees[count].name);
                    printf("Enter Basic Salary: ");
                    scanf("%f", &employees[count].basic_salary);

                    employees[count].hra = employees[count].basic_salary * 0.20;
                    employees[count].da = employees[count].basic_salary * 0.10;
                    employees[count].gross_salary = employees[count].basic_salary + employees[count].hra + employees[count].da;

                    count++;
                    printf("Salary details added successfully!\n");
                } else {
                    printf("Database capacity full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No salary records found.\n");
                } else {
                    printf("\n--- Employee Salary Records ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("\nID: %d | Name: %s\n", employees[i].emp_id, employees[i].name);
                        printf("Basic Salary: $%.2f\n", employees[i].basic_salary);
                        printf("HRA (20%%): $%.2f\n", employees[i].hra);
                        printf("DA (10%%): $%.2f\n", employees[i].da);
                        printf("Gross Salary: $%.2f\n", employees[i].gross_salary);
                        printf("----------------------------------\n");
                    }
                }
                break;

            case 3:
                printf("Exiting system. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}