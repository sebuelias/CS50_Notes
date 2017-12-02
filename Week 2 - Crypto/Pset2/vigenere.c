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
            //subtract 97 || 65 from both key and plaintext to create alphabet index?
            if (isalpha(plaintext[i])) {
                if(islower(plaintext[i])) {
                    plaintext[i] -= 97;
                    key[i] -= 97;
                    int j = i % keylen;
                    plaintext[i] = (plaintext[i] + key[j]) % 26;
                    plaintext[i] += 97;
                }
            }
            printf("%c", (char)plaintext[i]);
        }
        printf("\n");



        /*
        for (int i = 0, n = strlen(plaintext); i < n; i++) {
            int ciphertext = plaintext[i];
            if (isalpha(ciphertext)) {
                if (islower(ciphertext)) {
                    //subtract 97 for alphabet ([0] - [25]) index
                    ciphertext -= 97;
                    ciphertext = (ciphertext + key) % 26;
                    ciphertext +=  97;
                }
                else {
                    //subtract 65 for alphabet ([0] - [25]) index
                    ciphertext -= 65;
                    ciphertext = (ciphertext + key) % 26;
                    ciphertext +=  65;
                }
            }
            printf("%c", (char)ciphertext);
        }
        */
        printf("\n");

    }
    else {
        printf("Please enter one argument\n");
        return 1;
    }

return 0;
}
