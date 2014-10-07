// Amaninder Singh
// IT 301
// Assingment 3
// Southeast.c
// Version1

#include <stdio.h>

// member function
void go_south_east(int *lat, int *lon)
{
	*lat = *lat -1;
	*lon = *lon + 1;

}

int main(void)
{
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude, &longitude); // calling member function

	// Displaying the values
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
	
	return 0; // End of the program. 

}