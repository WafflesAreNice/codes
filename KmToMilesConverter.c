/*
**
** Filename: KmToMilesConverter.c
**
** Author: WafflesAreCool
**
** Description: This program is designed to convert km to miles or vice versa.
**
** Input: The user's choice of whether to convert km to miles or miles to km, as well as the integer value of the chosen measurement to convert.
**
** Output: The converted measuerment.
**
** Caveats: If integer is not entered for km or miles the program defaults the values to 0. The converter rounds after two decimal places.
** Version: 1.0
**
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	setbuf(stdout, NULL);

	char uans[12];
	char ans1[] = "km to miles";
	char ans2[] = "miles to km";
//sets up answer scenarios
	int z = 0;
	while (z != 1){
		printf("%s", "Do you want to convert from km to miles or from miles to km?\n");
		fgets(uans, sizeof(uans), stdin);

		int x = strcmp (uans, ans1);
		int y = strcmp (uans, ans2);
//compares the answer with the possible scenarios to determine what the user wants

		float km;
		float miles;

		if (x == 0){
			printf("How many kilometers?\n");
			scanf("%f", &km);
			miles = km / 1.609;
			printf("%0.2f kilometers is approximately %0.2f Miles.\n", km, miles);
			z++;
		}
//converts kilometers to miles
		
		else if (y == 0){
			printf("How many miles?\n");
			scanf("%f", &miles);
			km = miles * 1.609;
			printf("%0.2f Miles is approximately %0.2f Kilometers.\n", miles, km);
			z++;
		}
//converts miles to kilometers
		
		else {
			printf("%s", "Sorry I don't understand.\nPlease try again.\n\n");
		}
//notifies user that they type something wrong in their answer and restarts
	}

	return 0;
}
