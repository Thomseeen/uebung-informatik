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

void example() {
    for (int x = 0; x < 10; x++) {
        printf("%d\n", x);
    }

    int y = 10;
    while (y < 10) {
        printf("%d\n", y);

        y++;
    }

    int z = 10;
    do {
        printf("%d\n", z);
        z++;
    } while (z < 10);



    for (int x = 0; x < 10; x++) {
        if (x == 5) {
            continue;
        }

        printf("%d\n", x);

    }

    while (1) {

        if (stream_end()) {
            break;
        }
    }
}

void test_operators() {
    int a = 13;   // 1101   0110
    int b = 8;    // 1000

    int c = a ^ b; // 0101 = 5

    int x = b << 1;

    int codefield = 0b00110000;

    int u = a >> 3;

    char window_front_right = codefield & 0x08;
    char window_front_left = codefield & 0x04;
    int gear = codefield >> 4;
}
