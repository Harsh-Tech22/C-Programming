//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum UserRole {
    ADMIN = 10,  
    USER,        
    GUEST      
};

int main() {
 
    printf("ADMIN = %d\n", ADMIN);
    printf("USER = %d\n", USER);
    printf("GUEST = %d\n", GUEST);


    int roleValue = USER;
    printf("Stored in an int variable: %d\n", roleValue);

    return 0;
}
