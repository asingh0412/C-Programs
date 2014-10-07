// Struct testing 

#include <stdio.h>

typedef struct Point Point;

struct Point
{
	int x;
	int y;
	int z;
	
};

Point point = {4, 5, 6};

int main (void)
{
	Point start;
	Point end = {0, 0, 0};

//	start.x = 3;
//	start.y = 4; 
//	start.z = 5;

printf ("The value of x %i\n", point.x);
printf ("The value of x %i\n", start.y);
printf ("The value of x %i\n", start.z);	
printf ("The value of x %i\n", end.x);
printf ("The value of x %i\n", end.y);

printf ("The value of x %i\n", end.z);

return 0;
}