//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>


enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

 
    printf("Select a role:\n");
    printf("0. ADMIN\n");
    printf("1. USER\n");
    printf("2. GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome, ADMIN! You have full access.\n");
            break;
        case USER:
            printf("Welcome, USER! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, GUEST! You have minimal access.\n");
            break;
        default:
            printf("Invalid role selected!\n");
    }

    return 0;
}
