#include <stdio.h>
#include <string.h>

int main() {
    char word[21];  // Maximum word length is 20 characters

    // Read input until the end of file
    while (scanf("%s", word) != EOF) {
        int length = strlen(word);

        // Check if the word is a "palavrao" or a "palavrinha"
        if (length >= 10) {
            printf("palavrao\n");
        } else {
            printf("palavrinha\n");
        }
    }

    return 0;
}
