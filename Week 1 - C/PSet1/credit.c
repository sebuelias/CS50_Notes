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
        printf("Number: ");
        cred = get_long_long();
    } while(cred < 0);

    if(cred >= 4000000000000 && cred < 50000000000000) {
        digit = cred % 100;
        digit /= 10;
        cred /= 10;
        printf("%i \n", digit);
        printf("%lli \n", cred);
        digit = cred % 1000;
        digit /= 100;
        cred /= 10;
        printf("%i \n", digit);
        printf("%lli \n", cred);
        digit = cred % 10000;
        digit /= 1000;
        cred /= 10;
        printf("%i \n", digit);
        printf("%lli \n", cred);
    }
    //printf("%i %lli \n", digit, cred);

    return 0;

}