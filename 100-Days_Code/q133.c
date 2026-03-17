//Create an enum for months and print how many days each month has.
#include <stdio.h>

// Define an enumeration for months
enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {

    int daysInMonth[] = {
        31, // January
        28, // February
        31, // March
        30, // April
        31, // May
        30, // June
        31, // July
        31, // August
        30, // September
        31, // October
        30, // November
        31  // December
    };

    const char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    for (int month = JANUARY; month <= DECEMBER; month++) {
        printf("%s has %d days.\n", monthNames[month], daysInMonth[month]);
    }

    return 0;
}
