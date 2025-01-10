#include <stdio.h>
#include <math.h>

//#include "can_decoder.h"

double decode_signal_be(unsigned char frame[], int bit_pos, int bit_len, double lin_factor, double lin_offset);
double decode_signal_le(unsigned char frame[], int bit_pos, int bit_len, double lin_factor, double lin_offset);

int main() {
    int a = 0xE6 << 8;

    unsigned char can_frame_be[] = { 0x3D, 0xD7, 0x13, 0xD7, 0x14, 0x0E, 0x73, 0x72 };

    // decode signal 'MO_Hubraum'
    double displacement_be = decode_signal_be(can_frame_be, 40, 7, 0.1, 0);
    // decode signal 'MO_Leistung'
    double power_be = decode_signal_be(can_frame_be, 48, 9, 1, 0);

    printf("displacement (be): %f l\n", displacement_be);
    printf("power (be): %f kW\n", power_be);

    return 0;
}
