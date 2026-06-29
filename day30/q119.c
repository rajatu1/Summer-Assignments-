#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    char department[30];
    float salary;
};

int main() {
    struct Employee emp[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter details for Employee %d\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]s", emp[i].name);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter department: ");
        scanf(" %[^\n]s", emp[i].department);
        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }

    printf("--- Employee Records ---\n");
    for(i = 0; i < 3; i++) {
        printf("Employee %d\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Department: %s\n", emp[i].department);
        printf("Salary: $%.2f\n\n", emp[i].salary);
    }

    return 0;
}