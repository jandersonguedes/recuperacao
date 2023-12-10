#include <stdio.h>

int main() {
    int numTestCases;

    // Input the number of test cases
    scanf("%d", &numTestCases);

    for (int i = 0; i < numTestCases; i++) {
        int numTerms;

        // Input the number of terms for each test case
        scanf("%d", &numTerms);

        // Calculate the sum of the series
        int result = (numTerms % 2 == 0) ? 0 : 1;

        // Output the result
        printf("%d\n", result);
    }

    return 0;
}

