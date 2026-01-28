#include <stdio.h>

int main();

int win(int marked_board[][5]) {
    // Check rows
    for (int i = 0; i < 5; i++) {
        int row_bingo = 1; // Assume a bingo in the current row
        for (int j = 0; j < 5; j++) {
            if (marked_board[i][j] != 1) {
                row_bingo = 0; // Not a bingo in the current row
                break;
            }
        }
        if (row_bingo) {
            return 1; // Bingo found in a row
        }
    }

    // Check columns
    for (int j = 0; j < 5; j++) {
        int col_bingo = 1; // Assume a bingo in the current column
        for (int i = 0; i < 5; i++) {
            if (marked_board[i][j] != 1) {
                col_bingo = 0; // Not a bingo in the current column
                break;
            }
        }
        if (col_bingo) {
            return 1; // Bingo found in a column
        }
    }

    // Check main diagonal
    int main_diag_bingo = 1; // Assume a bingo in the main diagonal
    for (int i = 0; i < 5; i++) {
        if (marked_board[i][i] != 1) {
            main_diag_bingo = 0; // Not a bingo in the main diagonal
            break;
        }
    }
    if (main_diag_bingo) {
        return 1; // Bingo found in the main diagonal
    }

    // Check secondary diagonal
    int sec_diag_bingo = 1; // Assume a bingo in the secondary diagonal
    for (int i = 0; i < 5; i++) {
        if (marked_board[i][4 - i] != 1) {
            sec_diag_bingo = 0; // Not a bingo in the secondary diagonal
            break;
        }
    }
    if (sec_diag_bingo) {
        return 1; // Bingo found in the secondary diagonal
    }

    // No bingo found
    return 0;
}

