//Print all enum names and integer values using a loop.
#include <stdio.h>

enum UserRole {
    ADMIN,  // 0
    USER,   // 1
    GUEST   // 2
};

int main() {
    
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};


    for (int role = ADMIN; role <= GUEST; role++) {
        printf("%s = %d\n", roleNames[role], role);
    }

    return 0;
}
