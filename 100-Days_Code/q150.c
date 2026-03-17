//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;
    struct Student *ptr;

    ptr = &s1;

    printf("Enter student's name: ");
    scanf("%49s", ptr->name);
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    ptr->marks += 5;  

    printf("\nAfter adding 5 marks:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
