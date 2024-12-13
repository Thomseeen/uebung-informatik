#include <stdio.h>
#include <math.h>

//#include "can_decoder.h"

double decode_signal(char frame[], int bit_pos, int bit_len, double lin_factor, double lin_offset);

int main() {
    char can_frame[] = { 0x3D, 0xD7, 0x13, 0xD7, 0x14, 0x0E, 0x73, 0x72 };

    // decode signal 'MO_Hubraum'
    double displacement = decode_signal(can_frame, 40, 7, 0.1, 0);
    // decode signal 'MO_Leistung'
    double power = decode_signal(can_frame, 48, 9, 1, 0);

    printf("displacement: %f l\n", displacement);
    printf("power: %f kW\n", power);

    return 0;
}
