#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {

    if (argc == 2) {
        int key = atoi(argv[1]);
        printf("%i\n", key);
        for (char c = 'A'; c <= 'Z'; c++) {
            printf("%c is %i\n", c, ((int) c - 65));
        }
        for (char i = 'a'; i <= 'z'; i++) {
            printf("%c is %i\n", i, ((int) i) - 97);
        }
    }
    else {
        printf("Please enter one argument\n");
        return 1;
    }

return 0;
}
