#include <stdio.h>

int main(void)
{
	int decks =0;
	puts("Enter a number of decsk");

	// Ask the user for a number of decks

	scanf("%i", &decks);
	if (decks < 1) {
		puts ("That is not a valid number of decks");
		return 1;
	}

	cards = decks * 52;
	printf("There are %i cards\n", cards;

	return 0 ;
}