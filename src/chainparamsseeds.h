#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the qubnet network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x0d,0x4e,0xbc,0x09}, 33319},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x2c,0x56,0x53,0x1d,0x68,0x22,0xef,0x0d,0x34,0x58}, 33319}
};

static SeedSpec6 pnSeed6_test[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x0d,0x4e,0xbc,0x09}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x0d,0x5d,0x73,0x84}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x0d,0x5e,0x95,0x16}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x17,0x66,0xac,0x83}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0xe0,0xa2,0xa9}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x34,0xe9,0xc7,0x24}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x4c,0x4a,0xaa,0x43}, 51938},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xb9,0x53,0xda,0x97}, 51938}
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H