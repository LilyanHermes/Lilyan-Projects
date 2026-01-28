#include <stdio.h>

int main() {
    // Initialize variables
    int C = 10;  // assigning a value to 'C'
    int H = 1;   // assigning value 1 to 'H'
    int A = 1;   // assigning value 1 to 'A'

    // Check condition and update H and A if necessary
    if (C >= 15) {
        H = 7;
        A = 11;
    }

    // Print the values of C, H, and A separated by space
    printf("%d %d %d\n", C, H, A);

    return 0;
}
