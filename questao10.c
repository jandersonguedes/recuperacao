#include <stdio.h>

int main() {
    int spentTime, averageSpeed;

    // Input the spent time and average speed
    scanf("%d %d", &spentTime, &averageSpeed);

    // Calculate the distance
    double distance = spentTime * averageSpeed;

    // Calculate the amount of fuel needed (assuming a consumption of 12 Km/L)
    double fuelNeeded = distance / 12.0;

    // Output the result with three decimal places
    printf("%.3f\n", fuelNeeded);

    return 0;
}
