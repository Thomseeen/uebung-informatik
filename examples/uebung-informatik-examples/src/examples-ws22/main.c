#include <stdio.h>

#define READ 0x1
#define WRITE 0x2
#define COPY 0x4
#define DELETE 0x8
#define READ_WRITE READ | WRITE
#define MOVE COPY | DELETE

int main(int argc, char* argv[]) {
    char user_rights = READ_WRITE | COPY;

    printf("%s READ\n", user_rights & READ ? "CAN" : "CANNOT");
    printf("%s WRITE\n", user_rights & WRITE ? "CAN" : "CANNOT");
    printf("%s COPY\n", user_rights & COPY ? "CAN" : "CANNOT");
    printf("%s DELETE\n", user_rights & DELETE ? "CAN" : "CANNOT");

    printf("Press ENTER to Continue\n");
    int ch = getchar();

    return 0;
}