#include <stdio.h>

int main() {
    int goalsInter, goalsGremio, option;
    int grenais = 0, victoriesInter = 0, victoriesGremio = 0, draws = 0;

    do {
        // Read the number of goals scored by Inter and Gremio
        scanf("%d %d", &goalsInter, &goalsGremio);

        // Update statistics
        grenais++;
        if (goalsInter > goalsGremio) {
            victoriesInter++;
        } else if (goalsGremio > goalsInter) {
            victoriesGremio++;
        } else {
            draws++;
        }

        // Ask for another match
        printf("Novo grenal (1-sim 2-nao): ");
        scanf("%d", &option);

    } while (option == 1);

    // Print statistics
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", victoriesInter);
    printf("Gremio:%d\n", victoriesGremio);
    printf("Empates:%d\n", draws);

    if (victoriesInter > victoriesGremio) {
        printf("Inter venceu mais\n");
    } else if (victoriesGremio > victoriesInter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}

