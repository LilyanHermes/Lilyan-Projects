#include <stdio.h>

int main() {
    char arr[20][20];

    // Nested loops to iterate through each element of the array
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            // Calculate the sum of row and column indices
            int sum = i + j;

            // Place 'o' if sum is odd, otherwise place 'e'
            if (sum % 2 == 0)
                arr[i][j] = 'e';
            else
                arr[i][j] = 'o';
        }
    }

    // Print the array to check the result
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
