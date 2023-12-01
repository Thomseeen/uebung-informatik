#include "card_reader.h"

#include <winscard.h>

#pragma comment(lib, "winscard.lib")

unsigned short get_status(char data[]) {
    return data[0] << 8 | data[1];
}

long read() {
    LONG result;
    USHORT status;
    SCARDCONTEXT card_context = NULL;
    SCARDHANDLE card_handle = NULL;
    DWORD protocol_handle = NULL;

    result = SCardEstablishContext(SCARD_SCOPE_USER, NULL, NULL, &card_context);

    if (result != SCARD_S_SUCCESS) {
        return result;
    }

    result = SCardConnectA(card_context, "ACS ACR122 0", SCARD_SHARE_SHARED, SCARD_PROTOCOL_T0 | SCARD_PROTOCOL_T1, &card_handle, &protocol_handle);

    if (result != SCARD_S_SUCCESS) {
        return result;
    }

    char block_idx = 0x01;
    char save_key_send_data[] = { 0xFF, 0x82, 0x00, 0x00, 0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
    char auth_send_data[] = { 0xFF, 0x86, 0x00, 0x00, 0x05, 0x01, 0x00, block_idx, 0x60, 0x00 };
    char read_block_send_data[] = { 0xFF, 0xB0, 0x00, block_idx, 0x10 };
    byte recv_data[255];
    DWORD recv_length = sizeof(recv_data);

    result = SCardTransmit(card_handle, SCARD_PCI_T1, save_key_send_data, sizeof(save_key_send_data), NULL, recv_data, &recv_length);

    if (result != SCARD_S_SUCCESS) {
        return result;
    }

    result = SCardTransmit(card_handle, SCARD_PCI_T1, auth_send_data, sizeof(auth_send_data), NULL, recv_data, &recv_length);
    status = get_status(recv_data);

    if (result != SCARD_S_SUCCESS || status != 0x9000u) {
        return result;
    }

    result = SCardTransmit(card_handle, SCARD_PCI_T1, read_block_send_data, sizeof(read_block_send_data), NULL, recv_data, &recv_length);
    status = get_status(recv_data);

    if (result != SCARD_S_SUCCESS || status != 0x9000u) {
        return result;
    }

    result = SCardDisconnect(card_handle, SCARD_LEAVE_CARD);

    result = SCardReleaseContext(card_context);

    return result;
}