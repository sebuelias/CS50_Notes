#include <stdio.h>
#include <cs50.h>

int main(void) {

	//credit card number entries
	long long credConst, credDyn;
	//range of credit card numbers from lowest possible to highest possible
	long long amex34Start, amex34End, amex37Start, amex37End, mascStart, mascEnd, visa13Start, visa13End, visa16Start, visa16End;
	//individual digits in card number, and for loop length
	int digX2, dig, len;

	//checks for positive long long using while invalid condition
	do {
		printf("Number: \n");
		credConst = get_long_long();
		credDyn = credConst;
	} while(credConst < 0);

	//full range of 15-digit American Express cards starting with 34
	amex34Start = 340000000000000; //Must be greater than or equal to this value
	amex34End = 350000000000000; //Must be less than this value

	//full range of 15-digit American Express cards starting with 37
	amex37Start = 370000000000000; //Must be greater than or equal to this value
	amex37End = 380000000000000; //Must be less than this value

	//full range of 16-digit MasterCard cards, starting with digits 51, 52, 53, 54, or 55
	mascStart = 5100000000000000; //Must be greater than or equal to this value
	mascEnd = 5600000000000000; //Must be less than this value

	//full range of 13-digit Visa cards starting with 4
	visa13Start = 4000000000000; //Must be greater than or equal to this value
	visa13End = 5000000000000; //Must be less than this value

	//full range of 16-digit Visa cards starting with 4
	visa16Start = 4000000000000000; //Must be greater than or equal to this value
	visa16End = 5000000000000000; //Must be less than this value


	//checking card digit range to determine length and card type
	//length is digit length/2, rounded up for odd numbers
	if (((credConst >= amex34End) && (credConst < amex34End)) || 
		((credConst >= amex37End) && (credConst < amex37End)) || 
		((credConst >= mascStart) && (credConst < mascEnd)) || 
		((credConst >= visa16Start) && (credConst <visa16End))) 
	{
		len = 8;
	}
	else if ((credConst >= visa13Start) && (credConst < visa13End)) {
		len =  7;
	}
	else {
		printf("Invalid\n");
	}


	return 0;
}