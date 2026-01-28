#include <stdio.h>

void printNumBackwards(int start, int end) {
    while(start <= end) {
        printf("WRONG! 'start' should be larger than 'end'\n");
	printf("Enter start and end numbers (# #): ");
	scanf("%d %d", &start, &end);
}
        for (int num = start; num >= end; num--){
	printf("%d ", num);


    } printf("\n");
}

float feet2meters(float f_length) {
    float meters = f_length * 3.28084;
    return meters;
}

float meters2feet(float m_length) {
    float feet = m_length / 3.28084;
    return feet;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
}    }
float average (int a, int b, int c){
	float avg = (float) (a + b + c) / 3.0;
return avg;
}



int main() {
    int start, end, n, num1, num2, num3;
    float f_length, m_length, back, answer;

    printf("Enter start and end numbers (# #): ");
    scanf("%d %d", &start, &end);


    printNumBackwards(start, end);


    printf("Enter feet distance: ");
    scanf("%f", &f_length);


    m_length = feet2meters(f_length);


    printf("%f feet is equal to %f meters\n", f_length, m_length);


    back = meters2feet(m_length);
    printf("%f meters is equal to %f feet \n", m_length, back);


	printf("Enter a number to factorial: ");
	scanf("%d", &n);


    int result = factorial(n);
	printf("Factorial of %d is %d\n", n, result);

	printf("Enter 3 numbers to average: ");
	scanf("%d %d %d", &num1, &num2, &num3);

answer = average(num1, num2, num3);
printf("Average is %f\n", answer);

   return 0;
}



