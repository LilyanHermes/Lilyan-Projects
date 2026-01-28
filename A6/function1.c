#include <stdio.h>

void printNumbersBetween(int start, int end) {
    // Check if start is larger than end
    if (start <= end) {
        printf("Invalid input: 'start' should be larger than 'end'\n");
    } else {
        // Print numbers from start to end (inclusive)
        for (int num = start; num >= end; num--) {
            printf("%d ", num);
        }
        printf("\n");
    }
}

int main() {
    int start, end;

    // Read input integers separated by a comma
    printf("Enter start and end numbers (start > end): ");
    scanf("%d %d", &start, &end);

    // Call the function with user input
    printNumbersBetween(start, end);

    return 0;
}


