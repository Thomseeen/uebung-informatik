#include <stdio.h>

float decode_can_frame(char data[], int bit_pos, int bit_len, float val_factor, float val_offset);

int main(int argc, char* argv[]) {
    // CAN-Frame, ID: 0x641=1601, Name: Motor_Code_01
    char data[] = { 0xF5, 0xD5, 0x13, 0xD7, 0x14, 0x0E, 0x73, 0x72 };

    float hubraum = decode_can_frame(data, 40, 7, 0.1f, 0);
    float leistung = decode_can_frame(data, 48, 9, 1, 0);

    printf("MO_Hubraum: %.2f l\n", hubraum);
    printf("MO_Leistung: %.2f kW\n", leistung);

    return 0;
}

float decode_can_frame(char data[], int bit_pos, int bit_len, float val_factor, float val_offset) {
    int start_byte = bit_pos / 8;
    int end_byte = (bit_pos + bit_len) / 8;
    int byte_len = end_byte - start_byte + 1;

    unsigned int raw_value = 0;

    // relevant bytes are pushed into a combined integer
    for (int ii = start_byte, shift_cnt = 0; ii <= end_byte; ii++, shift_cnt += 8) {
        raw_value |= data[ii] << shift_cnt;
    }

    // offset shift, to remove any not needed bits around LSB
    raw_value >>= bit_pos % 8;

    // length mask, to mask any not needed bits around MSB
    int len_mask = (2 << (bit_len - 1)) - 1;
    raw_value &= len_mask;

    // apply factor and offset to final value
    return ((float)raw_value) * val_factor + val_offset;
}