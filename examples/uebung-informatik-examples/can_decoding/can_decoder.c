#include <math.h>

double decode_signal_le(unsigned char frame[], int bit_pos, int bit_len, double lin_factor, double lin_offset) {
    int byte_pos = (int)floor(bit_pos / 8.0);
    int byte_len = (int)ceil(bit_len / 8.0);

    int raw_value = 0;

    for (int pos = byte_pos, byte_shift = 0; pos < byte_pos + byte_len; pos++, byte_shift++) {
        raw_value |= frame[pos] << (byte_shift * 8);
    }

    int shift = bit_pos % 8;
    int mask = pow(2, bit_len) - 1;

    raw_value >>= shift;
    raw_value &= mask;

    return raw_value * lin_factor + lin_offset;
}

double decode_signal_be(unsigned char frame[], int bit_pos, int bit_len, double lin_factor, double lin_offset) {
    int byte_pos = (int)floor(bit_pos / 8.0);
    int byte_len = (int)ceil(bit_len / 8.0);

    int raw_value = 0;

    for (int pos = byte_pos, byte_shift = byte_len - 1; pos < byte_pos + byte_len; pos++, byte_shift--) {
        raw_value |= frame[pos] << (byte_shift * 8);
    }

    int shift = 8 - bit_len % 8;
    int mask = pow(2, bit_len) - 1;

    raw_value >>= shift;
    raw_value &= mask;

    return raw_value * lin_factor + lin_offset;
}