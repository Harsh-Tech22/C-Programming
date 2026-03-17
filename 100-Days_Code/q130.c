//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record
#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); 

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        getchar(); // consume newline
    }

    // Write records to file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(file);

    printf("\nStudent records saved to students.txt\n\n");


    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Records:\n");
    char name[100];
    int roll;
    float marks;

    while (fscanf(file, "%99[^\n]%d%f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(file);

    return 0;
}
