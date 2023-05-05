#include <stdio.h>

int main() {
    char c; // 1
    unsigned char uc; // 1
    short s; // 2
    unsigned short us;// 2
    int i; // 4
    unsigned int ui;// 4
    long l; // 4
    unsigned long ul;// 4
    long long ll; // 8
    unsigned long long ull; // 8

    float f; // 4
    double d; // 8

    printf("sizeof(char): %d\n", sizeof(char));
    printf("sizeof(char): %d\n", sizeof(short));
    printf("sizeof(char): %d\n", sizeof(int));
    printf("sizeof(char): %d\n", sizeof(long));
    printf("sizeof(char): %d\n", sizeof(long long));

    printf("\nPress ENTER to Continue\n");
    int ch = getchar();

    return 0;
}