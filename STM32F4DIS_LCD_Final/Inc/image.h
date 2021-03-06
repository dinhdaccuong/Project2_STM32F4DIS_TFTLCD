/*
 * bird_image.h
 *
 *  Created on: Jan 6, 2019
 *      Author: Cuong
 */

#ifndef IMAGE_H_
#define IMAGE_H_

unsigned short bird_image[0x1EE] ={
0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xCFFF, 0xCFFF, 0xD7FF, 0x6410, 0x3A6A, 0x3A8A, 0x3A8A, 0x3A8A, 0x3A8A, 0x42AA,   // 0x0010 (16)
0x42AA, 0x3208, 0xA679, 0xD7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xCFFF,   // 0x0020 (32)
0xBF7D, 0xB75D, 0xC7DF, 0x3A27, 0x0000, 0x0820, 0x0820, 0x0820, 0x0840, 0x0000, 0x0000, 0x0000, 0x8534, 0xBF9E, 0xCFFF, 0xC7FF,   // 0x0030 (48)
0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xCFFF, 0xE7FF, 0x1966, 0x0000, 0x0000, 0xBC60, 0xFF00, 0xFEC0,   // 0x0040 (64)
0xFEC0, 0xFEE0, 0xFFC0, 0x4180, 0x0001, 0xFFFF, 0x3165, 0x0000, 0xEFFF, 0xCFFF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF,   // 0x0050 (80)
0xCFFF, 0xCFFF, 0xBF7D, 0x2A09, 0x8BA2, 0xAC20, 0xA3E0, 0xE580, 0xFE20, 0xFE20, 0xFE20, 0xEDC0, 0x4160, 0x8C4E, 0xB596, 0xFFFF,   // 0x0060 (96)
0xC638, 0x9CF3, 0x29E7, 0x9E59, 0xCFFF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xCFFF, 0xC7FF, 0xCFFF, 0xAEFB, 0x0000, 0xBC80, 0xFEA0,   // 0x0070 (112)
0xFE80, 0xFE20, 0xFE20, 0xFE20, 0xFE40, 0xE580, 0x0000, 0xBDD7, 0xFFFF, 0xFFFF, 0xFFFF, 0xEF7D, 0x0000, 0x8555, 0xCFFF, 0xCFFF,   // 0x0080 (128)
0xC7FF, 0xC7FF, 0xD7FF, 0xB73C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFF20, 0xFE40, 0xFE20, 0xFE20, 0xFE40, 0xE580,   // 0x0090 (144)
0x0000, 0xB5B6, 0xFFFF, 0xFFFF, 0x3186, 0x0000, 0xFFFF, 0x41E7, 0x0000, 0xDFFF, 0xC7FF, 0xC7FF, 0x7CD3, 0x534D, 0x9CB2, 0x94B2,   // 0x00A0 (160)
0x94B2, 0x94B2, 0x94B2, 0x8C70, 0x5A00, 0xD520, 0xFE40, 0xFE20, 0xFE40, 0xE580, 0x0000, 0xB5B6, 0xFFFF, 0xFFFF, 0x4228, 0x0020,   // 0x00B0 (176)
0xFFFF, 0x4A28, 0x0020, 0xDFFF, 0xC7FF, 0xC7FF, 0x3228, 0x1061, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xEF5D, 0x0000, 0xBC60,   // 0x00C0 (192)
0xFEC0, 0xFE20, 0xFE40, 0xE560, 0x0000, 0xBDF8, 0xFFFF, 0xFFFF, 0x31A6, 0x0000, 0xFFFF, 0x4A28, 0x0020, 0xDFFF, 0xC7FF, 0xC7FF,   // 0x00D0 (208)
0x3A69, 0x10A3, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x31CA, 0x0000, 0xFEC0, 0xFE20, 0xFE40, 0xFF60, 0x28E0,   // 0x00E0 (224)
0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x4A69, 0x0041, 0xEFFF, 0xCFFF, 0xC7FF, 0x3A6A, 0x1080, 0xFFB0, 0xFFBB, 0xFFFF, 0xFFFF,   // 0x00F0 (240)
0xFFFF, 0xFFDE, 0xFF8F, 0x39C4, 0x0840, 0xFEC0, 0xFE20, 0xFE20, 0xFE60, 0xA3E0, 0x7B01, 0x7C11, 0x7BEF, 0x7BEF, 0x8C51, 0x2104,   // 0x0100 (256)
0x0000, 0x6410, 0xAEBA, 0xCFFF, 0x29C7, 0x0800, 0xFF20, 0xFFD9, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFF20, 0x3140, 0x0000, 0xFEC0,   // 0x0110 (272)
0xFE20, 0xFE20, 0xFE20, 0xFF00, 0xFE60, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8DD7, 0xE7FF, 0xD7FF, 0xB75D,   // 0x0120 (288)
0x0000, 0xBC60, 0xFE80, 0xFE40, 0xFE60, 0xED80, 0x0000, 0xBC80, 0xFEC0, 0xFE20, 0xFE20, 0xFE20, 0xFEE0, 0x3140, 0x0000, 0xFBC2,   // 0x0130 (304)
0xFB81, 0xFB81, 0xFB81, 0xFB81, 0xFB81, 0xFBA2, 0x3820, 0x0041, 0xCFFF, 0xBF7D, 0x42CC, 0x8363, 0x9380, 0x9380, 0x9380, 0x8B60,   // 0x0140 (320)
0x49C0, 0xCCE0, 0xFE00, 0xF5C0, 0xF5E0, 0xEDA0, 0x8B80, 0x69E0, 0x6120, 0x81C1, 0x81C1, 0x81C1, 0x81C1, 0x81C1, 0x81C1, 0x89A0,   // 0x0150 (336)
0x62C9, 0x6430, 0xC7FF, 0xCFFF, 0xE7FF, 0x1946, 0x0000, 0x0000, 0x0000, 0x0840, 0xFE60, 0xE580, 0xE560, 0xE560, 0xE580, 0xC4C0,   // 0x0160 (352)
0x0000, 0xB241, 0xF341, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8DD7, 0xDFFF, 0xC7FF, 0xC7FF, 0xCFFF, 0xC7FF,   // 0x0170 (368)
0xC7FF, 0xD7FF, 0x29C7, 0x0800, 0xFE40, 0xEDA0, 0xEDA0, 0xE560, 0xE560, 0xE580, 0xF5C0, 0x3960, 0x0000, 0xFB81, 0xEB41, 0xEB41,   // 0x0180 (384)
0xEB41, 0xF341, 0xDB01, 0x0000, 0x8D75, 0xCFFF, 0xC7FF, 0xC7FF, 0xC7FF, 0xCFFF, 0xCFFF, 0xD7FF, 0x6410, 0x4A88, 0x9BA0, 0x9380,   // 0x0190 (400)
0x9BC0, 0xEDA0, 0xE560, 0xE560, 0xF5C0, 0x72E0, 0x49A0, 0x9A01, 0x9A01, 0x9A01, 0x9A01, 0x9A01, 0x89E1, 0x0000, 0x8D75, 0xCFFF,   // 0x01A0 (416)
0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xD7FF, 0xB75D, 0x0000, 0x0000, 0x0000, 0xFE80, 0xFE00, 0xFE00, 0xFE00, 0xFE60,   // 0x01B0 (432)
0xEDA0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8534, 0xCFFF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF,   // 0x01C0 (448)
0xC7FF, 0xC7FF, 0xB73C, 0xBF7D, 0xA679, 0x0000, 0x0800, 0x0800, 0x0800, 0x0000, 0x18C1, 0xC7FF, 0xB75D, 0xB75D, 0xB75D, 0xB75D,   // 0x01D0 (464)
0xB75D, 0xB73C, 0xC7DF, 0xCFFF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xC7FF, 0xCFFF, 0xCFFF, 0xBF9E, 0x3208,   // 0x01E0 (480)
0x42AA, 0x42AA, 0x42AA, 0x3A8A, 0x4B0C, 0xDFFF, 0xCFFF, 0xCFFF, 0xCFFF, 0xCFFF, 0xCFFF, 0xCFFF, 0xCFFF, 0xC7FF, };


#endif /* IMAGE_H_ */
