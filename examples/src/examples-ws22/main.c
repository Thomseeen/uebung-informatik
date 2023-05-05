#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("sizeof(char): %d\n", sizeof(char));
    printf("sizeof(short): %d\n", sizeof(short));
    printf("sizeof(int): %d\n", sizeof(int));
    printf("sizeof(long): %d\n", sizeof(long));
    printf("sizeof(long long): %d\n", sizeof(long long));

    printf("Press ENTER to Continue\n");
    int ch = getchar();

    return 0;
}