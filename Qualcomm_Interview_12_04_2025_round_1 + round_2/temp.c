#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

uint8_t *create_packet(uint8_t handle, uint8_t priority, uint8_t *payload, uint8_t length)
{
    if (handle > 3 || priority > 3 || length > 15)
        return NULL;

    uint8_t *packet = (uint8_t *)malloc(1 + length);

    if (!packet)
        return NULL;

    packet[0] = (((handle & 0x03) << 6) | ((priority & 0x03) << 4) | (length & 0x0F));

    if (payload && length > 0)
        memcpy(packet + 1, payload, length);

    return packet;
}

int main()

{
    // uint8_t data[] =
    // create_packet();
    return 0;
}