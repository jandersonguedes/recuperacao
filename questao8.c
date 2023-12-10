#include <stdio.h>

int main() {
    int N;

    // Input the number of test cases
    scanf("%d", &N);

    // Process each test case
    for (int i = 0; i < N; i++) {
        int T;

        // Input the number of years passed (T)
        scanf("%d", &T);

        // Calculate the corresponding year
        int year = 2015 - T;

        // Print the result
        if (year <= 0) {
            printf("%d A.C.\n", -year + 1);
        } else {
            printf("%d D.C.\n", year);
        }
    }

    return 0;
}
