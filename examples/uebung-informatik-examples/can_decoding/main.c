#include <stdio.h>
#include <math.h>

//#include "can_decoder.h"

double decode_signal_be(unsigned char frame[], int bit_pos, int bit_len, double lin_factor, double lin_offset);
double decode_signal_le(unsigned char frame[], int bit_pos, int bit_len, double lin_factor, double lin_offset);

int main() {
    unsigned char can_frame_le[] = { 0x3D, 0xD7, 0x13, 0xD7, 0x14, 0x0E, 0x73, 0x72 };
    unsigned char can_frame_be[] = { 0x3D, 0xD7, 0x13, 0xD7, 0x14, 0x1C, 0xE6, 0x7F };

    // decode signal 'MO_Hubraum'
    double displacement_le = decode_signal_le(can_frame_be, 40, 7, 0.1, 0);
    // decode signal 'MO_Leistung'
    double power_le = decode_signal_le(can_frame_be, 48, 9, 1, 0);

    printf("displacement (le): %f l\n", displacement_le);
    printf("power (le): %f kW\n", power_le);

    return 0;
}
