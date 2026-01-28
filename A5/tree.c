#include <stdio.h>

int main() {
    int height, i, j;

    printf("Enter height of tree: ");
    scanf("%i", &height);

    for (i = 0; i < height; i++) {
        for (j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i * 2; j++) {
            printf("#");
        }
        printf("\n");
    }

    // trunk
    int th = 1;
    int tw = 1;

    for (i = 0; i < th; i++) {
        for (j = 0; j < height - th; j++) {
            printf(" ");
        }
        for (j = 0; j < tw; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}


