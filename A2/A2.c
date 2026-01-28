#include <stdio.h>

int main()
{

	int age, num1;
	char letter, letter1, letter2, letter3;
	float pi;

	printf("Enter your initals: ");
	scanf(" %c%c%c", &letter1, &letter2, &letter3);

	printf("How old are you?: ");
	scanf("%i", &age);

	printf("What is your favorite number? (1-100): ");
	scanf("%i", &num1);

	printf("Enter your desired letter grade: ");
	scanf(" %c", &letter);

	printf("Pi: ");
	scanf("%f", &pi);

	printf("Your initals are %c%c%c\n", letter1, letter2, letter3);
	printf("Your age is %i\n", age);
	printf("Your favorite number is %i\n", num1);
	printf("Your desired grade is %c\n", letter);
	printf("Pi: %.5f\n", pi);

return 0;
}
