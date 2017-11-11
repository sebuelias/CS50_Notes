#include <stdio.h>
#include <cs50.h>

int main(void) {

    //change as user input value
    float change;

    //number of all coins used
    int coin = 0;

    //number of each coin type
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;

    //make sure user enters appropriate value
    do {
        printf("Customer change: ");
        change = get_float();
    } while(change < 0);

    //quarter
    while (change >= 0.25) {
        coin++;
        quarter--;
        change -= 0.25;
    }

    //dime
    while (change >= 0.10 && change < 0.25) {
        coin++;
        dime--;
        change -= 0.10;
    }

    //nickel
    while (change >= 0.05 && change < 0.10) {
        coin++;
        nickel--;
        change -= 0.05;
    }

    //penny
    while (change > 0.000 && change < 0.05) {
        coin++;
        penny--;
        change -= 0.01;
    }

    //number of coins used
    printf("%i %f \n", coin, change);
}