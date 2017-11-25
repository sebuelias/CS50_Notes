#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {

    if (argc == 2) {
        int key = atoi(argv[1]);
        printf("plaintext: ");
        string entry = get_string();
        printf("%i\n", key);
        if (isalpha(entry[0])) {
            if (islower(entry[0])) {
                for (char c = 'a'; c <= 'z'; c++) {

                }
            }
            //printf("%s %c %i\n", entry, (entry[0] + key), ((int)entry[0] + key));
        }
        /*
        for (char c = 'A'; c <= 'Z'; c++) {
            printf("%c is %i\n", c, ((int) c - 65));
        }
        for (char i = 'a'; i <= 'z'; i++) {
            printf("%c is %i\n", i, ((int) i) - 97);
        }
        */
    }
    else {
        printf("Please enter one argument\n");
        return 1;
    }

return 0;
}
