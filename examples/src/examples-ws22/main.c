#include <stdio.h>

#include "lecture_examples1.h"


#define SIZE 5

int main(int argc, char* argv[]) {

    if (0) {
        printf("Piep 0\n");
    }

    if (1) {
        printf("Piep 1\n");
    }

    int a = 0;
    if (a = 0) {
        printf("Piep a\n");
    }

    int b = 0;
    if (b = 1) {
        printf("Piep b\n");
    }

    int c = 0;
    if (c == 0) {
        printf("Piep c\n");
    }

    int d = 0;
    if (d == 1) {
        printf("Piep d\n");
    }

    int e = 0;
    if (e++) {
        printf("Piep e\n");
    }

    int f = 0;
    if (++f) {
        printf("Piep f\n");
    }

    int g = 0;
    if (g = 16 == 0x10) {
        printf("Piep g\n");
    }

    return 0;
}