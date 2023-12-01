#include <stdio.h>

#define MilfareClassik1k 0x0001
#define MilfareClassik4k 0x0002
#define MilfareUltralight 0x0003
#define MilfareMini 0x0026
#define TopazAndJewel 0xF004
#define FeliCa212K 0xF011
#define FeliCa424K 0xF012

int exit_program(int code) {
    printf("Press ENTER to Continue\n");
    int ch = getchar();

    return code;
}

void print_card_name(short encoded_name) {
    // ???
}

char calculate_check_byte(char* data, char start, char length) {
    // ???

    return 0;
}

int main() {
    char raw_atr[] = { 0x3B, 0x8F, 0x80, 0x01, 0x80, 0x4F, 0x0C, 0xA0, 0x00, 0x00, 0x03, 0x06, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x6A };

    char hist_bytes_cnt = 0; // ???
    char bytes_cnt = hist_bytes_cnt + 5;

    if (calculate_check_byte(raw_atr, 1, bytes_cnt - 2) != raw_atr[bytes_cnt - 1]) {
        printf("Error: Invalid check byte!\n");

        return exit_program(-1);
    }

    // Is ISO 1443 3 card?
    if (hist_bytes_cnt != 15) {
        printf("Error: No ISO 1443 3 card!\n");

        return exit_program(1);
    }

    char c1 = raw_atr[13];
    char c2 = raw_atr[14];

    short encoded_name = (c1 << 8) | c2; // ???

    print_card_name(encoded_name);

    return exit_program(0);
}