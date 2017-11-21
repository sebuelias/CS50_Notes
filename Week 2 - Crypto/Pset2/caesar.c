#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {

    if (argc == 2) {
        int key = atoi(argv[1]);
        if (key > 0 && key < 26) {
            printf("plaintext: ");
            string plaintext = get_string();
            printf("%s\n", plaintext);
        }
        else {
            printf("Please enter a value between 1 and 25\n");
        }
    }

return 0;
}