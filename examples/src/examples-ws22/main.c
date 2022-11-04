#include <stdio.h>

#include "lecture_examples1.h"


#define SIZE 5

int main(int argc, char* argv[]) {
    int my_arr[SIZE] = { 0 };
    int my_arr2[SIZE] = { 0 };

    for (int i = 0, j = SIZE - 1; i < SIZE; i++, j--) {
        printf("index %d: %d\n", i, my_arr[i] + my_arr2[j]);
    }

    int i = 0;
    int j = SIZE;
    while (i < SIZE) {
        printf("index %d: %d\n", i, my_arr[i] + my_arr2[j]);
        i++;
        j--;
    }

    int j = 0;
    do {
        printf("index %d: %d\n", j, my_arr[j]);
        j++;
    } while (j < SIZE);

    return 0;
}