#include <stdio.h>

int main() {
    int height, i, j;

    printf("Enter height of tree: ");
    scanf("%i", &height);

    // Printing the tree part (triangle)
    for (i = 0; i < height; i++) {
        for (j = 0; j < height - i - 1; j++) {
            printf(" ");  // Print spaces for indentation
        }
        for (j = 0; j <= i * 2; j++) {
            printf("#");
        }
        printf("\n");
    }

    // Printing the trunk
    int trunkHeight = 1;  // You can adjust the trunk height as needed
    int trunkWidth = 1;   // You can adjust the trunk width as needed

    for (i = 0; i < trunkHeight; i++) {
        for (j = 0; j < height - trunkWidth ; j++) {
            printf(" ");  // Print spaces for centering the trunk
        }
        for (j = 0; j < trunkWidth; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

