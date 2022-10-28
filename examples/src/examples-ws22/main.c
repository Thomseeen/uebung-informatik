#include <stdio.h>

#include "lecture_examples1.h"

int main(int argc, char* argv[]) {
    for (int ii = 0; ii < argc; ii++) {
        printf("arg %i: %s\n", ii, argv[ii]);
    }

    format_identifier();
    loops();

    int ii;
    scanf_s(" %i", &ii);

    return 0;
}