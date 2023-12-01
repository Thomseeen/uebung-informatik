#include <stdio.h>

#define READ 0x1
#define WRITE 0x2
#define COPY 0x4
#define DELETE 0x8
#define READ_WRITE READ | WRITE
#define MOVE COPY | DELETE

int main(int argc, char* argv[]) {
    char my_string[255];

    scanf_s("%s", my_string, 255);
    printf("%s\n");

    printf("Press ENTER to Continue\n");
    int ch = getchar();

    return 0;
}