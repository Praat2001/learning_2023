/** Write a program using structures to calculate the difference
 between two time periods using a user-defined function. **/


 #include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimePeriod(struct Time *tp) {
    printf("Enter the time period\n");
    printf("Hours: ");
    scanf("%d", &(tp->hours));
    printf("Minutes: ");
    scanf("%d", &(tp->minutes));
    printf("Seconds: ");
    scanf("%d", &(tp->seconds));
}

void calculateDifference(struct Time start, struct Time end, struct Time *diff) {
    int startSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int diffSeconds = endSeconds - startSeconds;

    diff->hours = diffSeconds / 3600;
    diff->minutes = (diffSeconds % 3600) / 60;
    diff->seconds = (diffSeconds % 3600) % 60;
}

void displayTimePeriod(struct Time tp) {
    printf("%d hours, %d minutes, %d seconds\n", tp.hours, tp.minutes, tp.seconds);
}

int main() {
    struct Time startTime, endTime, difference;

    // Read start and end time periods
    printf("Enter the start time period:\n");
    getTimePeriod(&startTime);
    printf("\nEnter the end time period:\n");
    getTimePeriod(&endTime);

    // Calculate the difference
    calculateDifference(startTime, endTime, &difference);

    // Display the difference
    printf("\nThe difference between the time periods is: ");
    displayTimePeriod(difference);

    return 0;
}