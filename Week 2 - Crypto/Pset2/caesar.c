#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {

    if (argc == 2) {
        int key = atoi(argv[1]);
        printf("plaintext: ");
        string plaintext = get_string();
        printf("%i %s\n", key, plaintext);

        int newText;
        //-65 for upper, -97 for lower
        for (int i = 0, n = strlen(plaintext); i < n; i++) {
            newText = plaintext[i];
            if (isalpha(newText)) {
                if (islower(newText)) {
                    newText = newText - 97;
                }
                else {
                    newText = newText - 65;
                }
            }
            printf("%i ", newText);
        }
        printf("\n");
    }
    else {
        printf("Please enter one argument\n");
        return 1;
    }

return 0;
}
