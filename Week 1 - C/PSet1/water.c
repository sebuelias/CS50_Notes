#include <stdio.h>
#include <cs50.h>

int main(void) {
	//user enters number of minutes in shower
    printf("Minutes: ");
    int minutes = get_int();

    //amount of 16 ounce bottles filled
    printf("Bottles: %i\n", minutes * 12);
}