#include <stdio.h>
#include <cs50.h>

int main(void) {

    //change as user input value
    float change;

    int changeCoin;

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
        //convert change float to changeCoin int for accurate math
        changeCoin = change * 100;
    } while(change < 0);

    //quarter
    while (changeCoin >= 25) {
        coin++;
        quarter--;
        changeCoin -= 25;
    }

    //dime
    while (changeCoin >= 10 && changeCoin < 25) {
        coin++;
        dime--;
        changeCoin -= 10;
    }

    //nickel
    while (changeCoin >= 5 && changeCoin < 10) {
        coin++;
        nickel--;
        changeCoin -= 5;
    }

    //penny
    while (changeCoin > 0 && changeCoin < 5) {
        coin++;
        penny--;
        changeCoin -= 1;
    }

    //number of coins used
    printf("%i \n", coin);
}