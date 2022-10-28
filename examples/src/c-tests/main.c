#include <stdio.h>

int main() {
    int arr1[3] = { 0, 1, 2 };

    int arr2[5] = { 0, 1, 2, 3, 4 };

    int size = 6;
    int arr3[size];
    int calc_size = sizeof(arr3) / sizeof(int);

    printf("\narr1 is %lu long:\n", sizeof(arr1) / sizeof(int));
    for (int ii = 0; ii < 10; ii++) {
        printf("%d: %d, ", ii, arr1[ii]);
    }

    printf("\narr2 is %lu long:\n", sizeof(arr2) / sizeof(int));
    for (int ii = 0; ii < 10; ii++) {
        printf("%d: %d, ", ii, arr2[ii]);
    }

    printf("\narr3 is %lu long:\n", sizeof(arr3) / sizeof(int));
    for (int ii = 0; ii < 10; ii++) {
        printf("%d: %d, ", ii, arr3[ii]);
    }

    return 0;
}