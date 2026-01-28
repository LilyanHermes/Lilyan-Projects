#include <stdio.h>
#include <string.h>

int main() {
    char str[24]; // Array size is 24 to include space for the null terminator '\0'
    int t = 22; // The index of the last character in a 0-based array with length 23

    printf("Enter the genome (exactly 23 characters): ");
    scanf(" %23s", str); // Note the space before %23s, which consumes any leading whitespace

    // Check if the first letter is 'a'
    if (str[0] != 'a') {
        printf("NEGATIVE: First letter is not 'a'\n");
        return 0;
    }

    // Check if the last letter is 't'
    if (str[t] != 't') {
        printf("NEGATIVE: Last letter is not 't'\n");
        return 0;
    }

    printf("POSITIVE: Genome meets all criteria\n");
    return 0;
}

