//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>


enum Status {
    SUCCESS,  // 0
    FAILURE,  // 1
    TIMEOUT   // 2
};

int main() {
 
    enum Status currentStatus;

    for (currentStatus = SUCCESS; currentStatus <= TIMEOUT; currentStatus++) {
        switch (currentStatus) {
            case SUCCESS:
                printf("SUCCESS: Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("FAILURE: Operation failed.\n");
                break;
            case TIMEOUT:
                printf("TIMEOUT: Operation timed out.\n");
                break;
            default:
                printf("Unknown status.\n");
        }
    }

    return 0;
}
