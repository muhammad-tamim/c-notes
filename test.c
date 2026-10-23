#include <stdio.h>
#include <time.h>

int main() {
    // 1. Get the current calendar time
    time_t currentTime = time(NULL);
    printf("Current time: %lld\n", (long long)currentTime);

    // 2. Measure processor time
    clock_t start = clock();
    for (int i = 0; i < 1000000; i++) {
        // Do some work
    }
    clock_t end = clock();
    printf("Processor time: %.4f seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

    // 3. Calculate the difference between two time values
    time_t time1 = 1000;
    time_t time2 = 1600;
    printf("Time difference: %.0f seconds\n",
           difftime(time2, time1));

    // 4. Convert time to local date and time components
    struct tm *local = localtime(&currentTime);
    if (local != NULL) {
        printf("Year: %d\n", local->tm_year + 1900);
        printf("Month: %d\n", local->tm_mon + 1);
        printf("Day: %d\n", local->tm_mday);
    }

    // 5. Format date and time as a string
    char dateTime[50];
    if (local != NULL) {
        strftime(dateTime, sizeof(dateTime),
                 "%d-%m-%Y %I:%M:%S %p", local);
        printf("Formatted date: %s\n", dateTime);
    }

    return 0;
}