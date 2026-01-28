#include <stdio.h>

int main() {
    // Assign a value greater than 1 to variable X
    int X = 10;  // Change this value to any number greater than 1
    
    // Print X
    printf("%d\n", X);
    
    // Print double the value of X
    printf("%d\n", 2 * X);
    
    // Print the rightmost digit of X
    printf("%d\n", X % 10);
    
    // Print X+1 if X > 10, otherwise print X-1
    if (X > 10) {
        printf("%d\n", X + 1);
    } else {
        printf("%d\n", X - 1);
    }
    
    // Print X dashes on a line using a for loop
    for (int i = 0; i < X; i++) {
        printf("-");
    }
    printf("\n");
    
    // Print X dashes on a line using a while loop without break, continue, or if
    int count = 0;
    while (count < X) {
        printf("-");
        count++;
    }
    printf("\n");
    
    return 0;
}
