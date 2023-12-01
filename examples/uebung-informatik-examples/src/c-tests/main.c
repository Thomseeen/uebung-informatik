#include <stdio.h>

int main() {
    int my_numbers[3][2];

    int cnt = 0;
    for (int ii = 0; ii < 3; ii++) {
        for (int jj = 0; jj < 2; jj++) {
            my_numbers[ii][jj] = cnt++;
        }
    }

    for (int ii = 0; ii < 3; ii++) {
        for (int jj = 0; jj < 2; jj++) {
            printf("%d %d: %d\n", ii, jj, my_numbers[ii][jj]);
        }
    }

    printf("\nPress ENTER to Continue\n");
    int ch = getchar();

    return 0;
}