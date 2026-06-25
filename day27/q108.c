#include <stdio.h>

struct Marksheet {
    int roll_no;
    char name[50];
    float math;
    float science;
    float english;
    float history;
    float computer;
    float total;
    float percentage;
    char grade;
};

int main() {
    struct Marksheet student;

    printf("--- Enter Student Details ---\n");
    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_no);
    printf("Enter Name: ");
    scanf(" %[^\n]s", student.name);

    printf("Enter Marks for Math: ");
    scanf("%f", &student.math);
    printf("Enter Marks for Science: ");
    scanf("%f", &student.science);
    printf("Enter Marks for English: ");
    scanf("%f", &student.english);
    printf("Enter Marks for History: ");
    scanf("%f", &student.history);
    printf("Enter Marks for Computer Science: ");
    scanf("%f", &student.computer);

    student.total = student.math + student.science + student.english + student.history + student.computer;
    student.percentage = (student.total / 500) * 100;

    if (student.percentage >= 85) {
        student.grade = 'A';
    } else if (student.percentage >= 70) {
        student.grade = 'B';
    } else if (student.percentage >= 50) {
        student.grade = 'C';
    } else if (student.percentage >= 33) {
        student.grade = 'D';
    } else {
        student.grade = 'F';
    }

    printf("\n==========================================\n");
    printf("                MARKSHEET                 \n");
    printf("==========================================\n");
    printf("Roll No: %d            Name: %s\n", student.roll_no, student.name);
    printf("------------------------------------------\n");
    printf("Subject          Maximum Marks   Obtained \n");
    printf("------------------------------------------\n");
    printf("Math             100             %.2f\n", student.math);
    printf("Science          100             %.2f\n", student.science);
    printf("English          100             %.2f\n", student.english);
    printf("History          100             %.2f\n", student.history);
    printf("Computer Sci     100             %.2f\n", student.computer);
    printf("------------------------------------------\n");
    printf("Total Marks:     500             %.2f\n", student.total);
    printf("Percentage:                      %.2f%%\n", student.percentage);
    printf("Final Grade:                     %c\n", student.grade);
    printf("==========================================\n");

    return 0;
}