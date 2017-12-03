#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[]) {

    if (argc == 2) {

        string key = argv[1];
        int keylen = strlen(key);

        printf("plaintext: ");
        string plaintext = get_string();

        printf("ciphertext: ");

        for (int i = 0, n = strlen(plaintext); i < n; i++) {
            //subtract 97 || 65 from both key and plaintext to create alphabet index
            string ciphertext = plaintext;
            if (isalpha(plaintext[i])) {
                if(islower(plaintext[i])) {
                    plaintext[i] -= 97;
                    key[i] -= 97;
                    int j = i % keylen;
                    ciphertext[i] = (plaintext[i] + key[j]) % 26;
                    ciphertext[i] += 97;
                }
            }
            printf("%c", ciphertext[i]);
        }
        printf("\n");

    }
    else {
        printf("Please enter one argument\n");
        return 1;
    }

return 0;
}
