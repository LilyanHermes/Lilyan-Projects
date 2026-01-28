#include <stdio.h>

int main()
{

	float hours, hourlypay, taxp;
	float earned, taxed, thp;

	printf("Hours worked: ");
	scanf("%f", &hours);

	printf("Hourly Pay: ");
	scanf("%f", &hourlypay);

	printf("Tax Percentage: ");
	scanf("%2f", &taxp);

	//math

	earned = (hours * hourlypay);
	taxed = ((earned * taxp) * 0.01);
	thp = (earned - taxed);


	printf("Earned: $%.2f\n", earned);
	printf("Tax: $%.2f\n", taxed);
	printf("Take-Home Pay: $%.2f\n", thp);

return 0;
}
