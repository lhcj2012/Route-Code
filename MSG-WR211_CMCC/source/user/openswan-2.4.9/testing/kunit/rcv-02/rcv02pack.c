const unsigned char packet1_len=158;
const unsigned char packet1[]={
    0x10, 0x00, 0x00, 0x64, 0x64, 0x45, 0x10, 0x00,  /* ...ddE.. */
    0x00, 0x64, 0x64, 0x23, 0x08, 0x00, 0x45, 0x00,  /* .dd#..E. */
    0x00, 0x90, 0xf2, 0x77, 0x00, 0x00, 0x40, 0x11,  /* ...w..@. */
    0x03, 0x9f, 0xc0, 0x01, 0x02, 0x17, 0xc0, 0x01,  /* ........ */
    0x02, 0x2d, 0x11, 0x94, 0x11, 0x94, 0x00, 0x7c,  /* .-.....| */
    0x00, 0x00, 0x12, 0x34, 0x56, 0x78, 0x00, 0x00,  /* ...4Vx.. */
    0x00, 0x01, 0x28, 0x2c, 0x99, 0x87, 0xcf, 0x62,  /* ..(,...b */
    0xf1, 0x0c, 0xc3, 0x1b, 0x6e, 0x11, 0x1a, 0xa3,  /* ....n... */
    0x2f, 0x2f, 0x05, 0xea, 0xaa, 0xd0, 0x2e, 0xa7,  /* //...... */
    0x0a, 0x0a, 0x5f, 0xa9, 0x1b, 0x00, 0x84, 0x79,  /* .._....y */
    0xc5, 0x15, 0x62, 0x13, 0x0c, 0x5c, 0x45, 0x6f,  /* ..b..\Eo */
    0x99, 0x0f, 0xbb, 0x07, 0x01, 0x2a, 0x6e, 0x59,  /* .....*nY */
    0x46, 0x3f, 0xb1, 0xb9, 0xe5, 0x9e, 0x2c, 0x7b,  /* F?....,{ */
    0x50, 0x7f, 0x9f, 0x7c, 0xd2, 0x76, 0x89, 0x99,  /* P..|.v.. */
    0x30, 0x21, 0x87, 0x29, 0xe9, 0x66, 0x4f, 0xab,  /* 0!.).fO. */
    0x9e, 0xbd, 0x34, 0xd6, 0x49, 0xac, 0xd0, 0xcc,  /* ..4.I... */
    0x34, 0x03, 0x73, 0x10, 0x04, 0x25, 0x69, 0xce,  /* 4.s..%i. */
    0xa1, 0xf5, 0xe2, 0x7c, 0x02, 0x53, 0x8e, 0x8c,  /* ...|.S.. */
    0x4d, 0x75, 0xe1, 0x31, 0x44, 0x7c, 0x35, 0x99,  /* Mu.1D|5. */
    0x7a, 0x77, 0x9b, 0x52, 0xe7, 0x34,              /* zw.R.4   */
    0};

const unsigned char packet2_len=42;
const unsigned char packet2[]={
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00,  /* ........ */
    0x00, 0xab, 0xcd, 0xff, 0x08, 0x06, 0x00, 0x01,  /* ........ */
    0x08, 0x00, 0x06, 0x04, 0x00, 0x01, 0x10, 0x00,  /* ........ */
    0x00, 0xab, 0xcd, 0xff, 0xc0, 0x00, 0x01, 0xfe,  /* ........ */
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00,  /* ........ */
    0x01, 0x01,                                      /* ..       */
    0};

const unsigned char packet3_len=98;
const unsigned char packet3[]={
    0x10, 0x00, 0x00, 0x70, 0x72, 0x69, 0x10, 0x00,  /* ...pri.. */
    0x00, 0xab, 0xcd, 0xff, 0x08, 0x00, 0x45, 0x00,  /* ......E. */
    0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x3e, 0x01,  /* .T..@.>. */
    0xb9, 0xa6, 0xc0, 0x00, 0x02, 0x01, 0xc0, 0x00,  /* ........ */
    0x01, 0x01, 0x08, 0x00, 0xba, 0xf0, 0x6f, 0x00,  /* ......o. */
    0x05, 0x00, 0x23, 0x9b, 0xc7, 0x3b, 0xf2, 0x34,  /* ..#..;.4 */
    0x01, 0x00, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,  /* ........ */
    0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,  /* ........ */
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,  /* ........ */
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,  /* .. !"#$% */
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,  /* &'()*+,- */
    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35,  /* ./012345 */
    0x36, 0x37,                                      /* 67       */
    0};

const unsigned char packet4_len=98;
const unsigned char packet4[]={
    0x10, 0x00, 0x00, 0x70, 0x72, 0x69, 0x10, 0x00,  /* ...pri.. */
    0x00, 0xab, 0xcd, 0xff, 0x08, 0x00, 0x45, 0x00,  /* ......E. */
    0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x3e, 0x01,  /* .T..@.>. */
    0xb9, 0xa6, 0xc0, 0x00, 0x02, 0x01, 0xc0, 0x00,  /* ........ */
    0x01, 0x01, 0x08, 0x00, 0x72, 0xf0, 0x6f, 0x00,  /* ....r.o. */
    0x06, 0x00, 0x28, 0x9b, 0xc7, 0x3b, 0x34, 0x35,  /* ..(..;45 */
    0x01, 0x00, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,  /* ........ */
    0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,  /* ........ */
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,  /* ........ */
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,  /* .. !"#$% */
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,  /* &'()*+,- */
    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35,  /* ./012345 */
    0x36, 0x37,                                      /* 67       */
    0};

const unsigned char packet5_len=98;
const unsigned char packet5[]={
    0x10, 0x00, 0x00, 0x70, 0x72, 0x69, 0x10, 0x00,  /* ...pri.. */
    0x00, 0xab, 0xcd, 0xff, 0x08, 0x00, 0x45, 0x00,  /* ......E. */
    0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x3e, 0x01,  /* .T..@.>. */
    0xb9, 0xa6, 0xc0, 0x00, 0x02, 0x01, 0xc0, 0x00,  /* ........ */
    0x01, 0x01, 0x08, 0x00, 0xd9, 0xef, 0x6f, 0x00,  /* ......o. */
    0x07, 0x00, 0x2d, 0x9b, 0xc7, 0x3b, 0xc7, 0x35,  /* ..-..;.5 */
    0x01, 0x00, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,  /* ........ */
    0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,  /* ........ */
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,  /* ........ */
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,  /* .. !"#$% */
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,  /* &'()*+,- */
    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35,  /* ./012345 */
    0x36, 0x37,                                      /* 67       */
    0};

const unsigned char packet6_len=98;
const unsigned char packet6[]={
    0x10, 0x00, 0x00, 0x70, 0x72, 0x69, 0x10, 0x00,  /* ...pri.. */
    0x00, 0xab, 0xcd, 0xff, 0x08, 0x00, 0x45, 0x00,  /* ......E. */
    0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x3e, 0x01,  /* .T..@.>. */
    0xb9, 0xa6, 0xc0, 0x00, 0x02, 0x01, 0xc0, 0x00,  /* ........ */
    0x01, 0x01, 0x08, 0x00, 0xe8, 0xef, 0x6f, 0x00,  /* ......o. */
    0x08, 0x00, 0x32, 0x9b, 0xc7, 0x3b, 0xb2, 0x35,  /* ..2..;.5 */
    0x01, 0x00, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,  /* ........ */
    0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,  /* ........ */
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,  /* ........ */
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,  /* .. !"#$% */
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,  /* &'()*+,- */
    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35,  /* ./012345 */
    0x36, 0x37,                                      /* 67       */
    0};

const unsigned char packet7_len=98;
const unsigned char packet7[]={
    0x10, 0x00, 0x00, 0x70, 0x72, 0x69, 0x10, 0x00,  /* ...pri.. */
    0x00, 0xab, 0xcd, 0xff, 0x08, 0x00, 0x45, 0x00,  /* ......E. */
    0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x3e, 0x01,  /* .T..@.>. */
    0xb9, 0xa6, 0xc0, 0x00, 0x02, 0x01, 0xc0, 0x00,  /* ........ */
    0x01, 0x01, 0x08, 0x00, 0x9a, 0xef, 0x6f, 0x00,  /* ......o. */
    0x09, 0x00, 0x37, 0x9b, 0xc7, 0x3b, 0xfa, 0x35,  /* ..7..;.5 */
    0x01, 0x00, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,  /* ........ */
    0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,  /* ........ */
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,  /* ........ */
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,  /* .. !"#$% */
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,  /* &'()*+,- */
    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35,  /* ./012345 */
    0x36, 0x37,                                      /* 67       */
    0};

const unsigned char packet8_len=98;
const unsigned char packet8[]={
    0x10, 0x00, 0x00, 0x70, 0x72, 0x69, 0x10, 0x00,  /* ...pri.. */
    0x00, 0xab, 0xcd, 0xff, 0x08, 0x00, 0x45, 0x00,  /* ......E. */
    0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x3e, 0x01,  /* .T..@.>. */
    0xb9, 0xa6, 0xc0, 0x00, 0x02, 0x01, 0xc0, 0x00,  /* ........ */
    0x01, 0x01, 0x08, 0x00, 0x5f, 0xee, 0x6f, 0x00,  /* ...._.o. */
    0x0a, 0x00, 0x3c, 0x9b, 0xc7, 0x3b, 0x2f, 0x37,  /* ..<..;/7 */
    0x01, 0x00, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,  /* ........ */
    0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,  /* ........ */
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,  /* ........ */
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,  /* .. !"#$% */
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,  /* &'()*+,- */
    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35,  /* ./012345 */
    0x36, 0x37,                                      /* 67       */
    0};

const unsigned char packet9_len=98;
const unsigned char packet9[]={
    0x10, 0x00, 0x00, 0x70, 0x72, 0x69, 0x10, 0x00,  /* ...pri.. */
    0x00, 0xab, 0xcd, 0xff, 0x08, 0x00, 0x45, 0x00,  /* ......E. */
    0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x3e, 0x01,  /* .T..@.>. */
    0xb9, 0xa6, 0xc0, 0x00, 0x02, 0x01, 0xc0, 0x00,  /* ........ */
    0x01, 0x01, 0x08, 0x00, 0x0b, 0xef, 0x6f, 0x00,  /* ......o. */
    0x0b, 0x00, 0x41, 0x9b, 0xc7, 0x3b, 0x7d, 0x36,  /* ..A..;}6 */
    0x01, 0x00, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,  /* ........ */
    0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,  /* ........ */
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,  /* ........ */
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,  /* .. !"#$% */
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,  /* &'()*+,- */
    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35,  /* ./012345 */
    0x36, 0x37,                                      /* 67       */
    0};

const unsigned char packet10_len=98;
const unsigned char packet10[]={
    0x10, 0x00, 0x00, 0x70, 0x72, 0x69, 0x10, 0x00,  /* ...pri.. */
    0x00, 0xab, 0xcd, 0xff, 0x08, 0x00, 0x45, 0x00,  /* ......E. */
    0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x3e, 0x01,  /* .T..@.>. */
    0xb9, 0xa6, 0xc0, 0x00, 0x02, 0x01, 0xc0, 0x00,  /* ........ */
    0x01, 0x01, 0x08, 0x00, 0xc5, 0xee, 0x6f, 0x00,  /* ......o. */
    0x0c, 0x00, 0x46, 0x9b, 0xc7, 0x3b, 0xbd, 0x36,  /* ..F..;.6 */
    0x01, 0x00, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,  /* ........ */
    0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15,  /* ........ */
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,  /* ........ */
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,  /* .. !"#$% */
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,  /* &'()*+,- */
    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35,  /* ./012345 */
    0x36, 0x37,                                      /* 67       */
    0};

