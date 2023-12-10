#include <stdio.h>

int main() {
    int startDay, startHour, startMinute, startSecond;
    int endDay, endHour, endMinute, endSecond;

    // Read the start day and time
    scanf("Dia %d", &startDay);
    scanf("%d : %d : %d", &startHour, &startMinute, &startSecond);

    // Read the end day and time
    scanf("Dia %d", &endDay);
    scanf("%d : %d : %d", &endHour, &endMinute, &endSecond);

    // Convert everything to seconds
    int startTimeInSeconds = startDay * 24 * 60 * 60 + startHour * 60 * 60 + startMinute * 60 + startSecond;
    int endTimeInSeconds = endDay * 24 * 60 * 60 + endHour * 60 * 60 + endMinute * 60 + endSecond;

    // Calculate the duration in seconds
    int durationInSeconds = endTimeInSeconds - startTimeInSeconds;

    // Calculate days, hours, minutes, and seconds
    int days = durationInSeconds / (24 * 60 * 60);
    int hours = (durationInSeconds % (24 * 60 * 60)) / (60 * 60);
    int minutes = ((durationInSeconds % (24 * 60 * 60)) % (60 * 60)) / 60;
    int seconds = ((durationInSeconds % (24 * 60 * 60)) % (60 * 60)) % 60;

    // Print the result
    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}

