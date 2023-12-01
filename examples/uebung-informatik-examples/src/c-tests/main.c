#include <stdio.h>

int main() {
    int aa = 0;
    int bb = 0;

    printf("\n--- INT x++ ---\n");
    printf("%d\n", aa++);

    printf("\n--- INT ++x ---\n");
    printf("%d\n", ++bb);

    printf("\n--- FOR ++x ---\n");
    for (int ii = 0; ii < 5; ++ii) {
        printf("%d\n", ii);
    }

    printf("\n--- FOR x++ ---\n");
    for (int ii = 0; ii < 5; ii++) {
        printf("%d\n", ii);
    }

    printf("\n--- WHILE x++ ---\n");
    int jj = 0;
    while (jj++ < 5) {
        printf("%d\n", jj);
    }

    printf("\n--- WHILE ++x ---\n");
    int kk = 0;
    while (++kk < 5) {
        printf("%d\n", kk);
    }

    printf("\nPress ENTER to Continue\n");
    int ch = getchar();

    return 0;
}