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
        string ciphertext = "";
        int l = 0;
        for (int i = 0, n = strlen(plaintext); i < n; i++) {
            int j = l % keylen;
            l++;
            ciphertext = plaintext;
            key[i] = toupper(key[i]);
            key[i] -= 65;
            if(isupper(plaintext[i])) {
                plaintext[i] -= 65;
                ciphertext[i] = (plaintext[i] + key[j]) % 26;
                ciphertext[i] += 65;
                //printf("%c", ciphertext[i]);
            }
            else if(islower(plaintext[i])) {
                plaintext[i] -= 97;
                ciphertext[i] = (plaintext[i] + key[j]) % 26;
                ciphertext[i] += 97;
                //printf("%c", ciphertext[i]);
            }
            else if(!isalpha(plaintext[i])) {
                l--;
            }
        }
        printf("%s\n", ciphertext);

    }
    else {
        printf("Please enter one argument\n");
        return 1;
    }

return 0;
}
