#include <stdio.h>

#include "lecture_examples1.h"

int main(int argc, char* argv[]) {
    for (int ii = 0; ii < argc; ii++, argv++) {
        printf("arg %i: %s\n", ii, *argv);
    }

    format_identifier();
    loops();

    return 0;
}