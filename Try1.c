#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int power_I(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int power_R(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * power_R(base, exp - 1);
}

int factorial_I(int f) {
    int result = 1;
    for (int i = 1; i <= f; i++) {
        result *= i;
    }
    return result;
}

int factorial_R(int f) {
    if (f == 1)
        return 1;
    else
        return f * factorial_R(f - 1);
}

void manually_input() {
    int base, exponent, factorial;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("Enter factorial: ");
    scanf("%d", &factorial);

    int power_result_I = power_I(base, exponent);
    int power_result_R = power_R(base, exponent);
    int factorial_result_I = factorial_I(factorial);
    int factorial_result_R = factorial_R(factorial);

    printf("Iterative Power: %d\n", power_result_I);
    printf("Recursive Power: %d\n", power_result_R);
    printf("Iterative Factorial: %d\n", factorial_result_I);
    printf("Recursive Factorial: %d\n", factorial_result_R);
}

void generate_random_values(int seed) {
    srand(seed);

    int base = rand() % 11;
    int exponent = rand() % 6;
    int factorial = rand() % 10 + 1;

    int power_result_I = power_I(base, exponent);
    int power_result_R = power_R(base, exponent);
    int factorial_result_I = factorial_I(factorial);
    int factorial_result_R = factorial_R(factorial);

    printf("Iterative Power: %d\n", power_result_I);
    printf("Recursive Power: %d\n", power_result_R);
    printf("Iterative Factorial: %d\n", factorial_result_I);
    printf("Recursive Factorial: %d\n", factorial_result_R);
}

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Manually input values\n");
    printf("2. Generate random numbers using a specific seed\n");
    printf("3. Generate random numbers without using a seed\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        manually_input();
        break;
    case 2:
        int seed;
        printf("Enter seed: ");
        scanf("%d", &seed);
        generate_random_values(seed);
        break;
    case 3:
        generate_random_values(time(NULL));
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }

    return 0;
}
