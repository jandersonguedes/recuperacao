#include <stdio.h>

int main() {
    // Read four integer values
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Check the given conditions
    if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0) {
        printf("Valores aceitos\n");  // Accepted values
    } else {
        printf("Valores nao aceitos\n");  // Values not accepted
    }

    return 0;
}

