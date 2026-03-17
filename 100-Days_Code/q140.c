//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};


struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
   
    struct Person p1;

   
    printf("Enter name: ");
    scanf("%49s", p1.name); 
    printf("Enter age: ");
    scanf("%d", &p1.age);
    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", (int*)&p1.gender);  

 
    const char *genderNames[] = {"MALE", "FEMALE", "OTHER"};

   
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: %s\n", genderNames[p1.gender]);

    return 0;
}
