//Amaninder Singh
// IT 301
// Version 2 
// cards.c

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	
	int val = 0;
	int count = 0;
	char card_name[3];
	while (card_name[0] != 'X')
	{
	puts("Enter the card_name");
	scanf("%2s", card_name);
	switch(card_name[0] ){
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		case 'X':
			continue;
		default:
			val = atoi(card_name);
			if( (val< 1) || (val >10)){
				puts("Please enter the value in the range \n");
				continue;
			}
		}
		if((val > 2) && (val < 7 ))
			{ count++;  }
	
		else if  (val == 10){
		count --;
		}
		printf("Current count: %i\n", count);
	}

	return 0;
}