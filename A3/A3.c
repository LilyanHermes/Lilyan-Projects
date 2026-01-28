#include <stdio.h>

int main()
{
	int numberofTD, xtrapoints, twopoints, fieldgoals, safeties, finalscore;
	int numberofTDs, xtrapointss, twopointss, fieldgoalss, safetiess;


	printf("How many touchdowns?: ");
	scanf("%i", &numberofTD);

	printf("How many extra points?: ");
	scanf("%i", &xtrapoints);

	printf("How many 2-pt conversion?: ");
	scanf("%i", &twopoints);

	printf("How many field goals?: ");
	scanf("%i", &fieldgoals);

	printf("How many safeties?: ");
	scanf("%i", &safeties);
//MATH

	numberofTDs = (numberofTD * 6);
	xtrapointss = (xtrapoints * 1);
	twopointss = (twopoints * 2);
	fieldgoalss = (fieldgoals * 3);
	safetiess = (safeties * 2);

	finalscore = (numberofTDs + xtrapointss + twopointss + fieldgoalss + safetiess);

	printf("Final Score: %i\n", finalscore);

return 0;
}
