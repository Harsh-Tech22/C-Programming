//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee emp;
    FILE *fp;

    printf("Enter employee name: ");
    scanf("%49s", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.emp_id);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);


    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

   
    struct Employee emp_read;
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&emp_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee Details from file:\n");
    printf("Name: %s\n", emp_read.name);
    printf("Employee ID: %d\n", emp_read.emp_id);
    printf("Salary: %.2f\n", emp_read.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp_read.joining_date.day,
           emp_read.joining_date.month,
           emp_read.joining_date.year);

    return 0;
}
