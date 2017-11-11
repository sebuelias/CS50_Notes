#include <stdio.h>
#include <cs50.h>

int main(void) {

    long long cred; //stored value for credit card number
    int digit;

    //credit card lengths
    //int amLen = 15;
    // int masLen = 16;
    // int visLen1 = 13;
    // int visLen2 = 16;

    //makes sure number entered is positive
    do {
        printf("Number: \n");
        cred = get_long_long();
    } while(cred < 0);

    if (cred >= 4000000000000 && cred < 5000000000000) {
        int x = 1;
        int digSum = 0;
        for(int i = 0; i < 6; i++) {
            digit = cred % (100 * x);
            digit /= (10 * x);
            cred /= 10;
            //printf("Original Digit: %i\n", digit);
            digit *= 2;
            if (digit >= 10) {
                int tensDigit = digit / 10;
                digit %= 10;
                digit += tensDigit;
            }
            //digit += digit;
            printf("New Digit value: %i\n", digit);
            //printf("%lli \n", cred);
            x *= 10;
            digSum += digit;
        }
        printf("Digit Sum: %i\n", digSum);
    }
    else {
        printf("invalid\n");
    }

    return 0;

}