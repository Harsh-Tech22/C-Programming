//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student students[], int n) {
    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[highestIndex].marks) {
            highestIndex = i;
        }
    }
    return students[highestIndex];
}

int main() {
    int n = 5;
    struct Student students[5];

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    struct Student top = getTopStudent(students, n);

    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
