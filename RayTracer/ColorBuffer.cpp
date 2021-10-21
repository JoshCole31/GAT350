#include "ColorBuffer.h"

//void ColorBuffer::BoxBlur(const ColorBuffer& colorBuffer)
//{
//    ColorBuffer source = colorBuffer;
//    int16_t k[3][3] =
//    {
//        { 1, 1, 1 },
//       { 1, 1, 1 },
//       { 1, 1, 1 },
//    };
//
//    for (int i = 0; i < source.width * source.height; i++)
//    {
//        int x = i % source.width;
//        int y = i / source.width;
//
//        if (x < 1 || x + 1 >= source.width || y < 1 || y + 1 >= source.height) continue;
//
//        uint16_t r = 0;
//        uint16_t g = 0;
//        uint16_t b = 0;
//        for (int iy = -1; iy <= 1; iy++)
//        {
//            for (int ix = -1; ix <= 1; ix++)
//            {
//                r += ((color_t*)source.data)[? ].r * k[? ][? ];
//                g += ((color_t*)source.data)[? ].g * k[? ][? ];
//                b += ((color_t*)source.data)[? ].b * k[? ][? ];
//            }
//        }
//
//        color_t& color = ((color_t*)colorBuffer.data)[i];
//        color.r = r / 9;
//        color.g = g / 9;
//        color.b = b / 9;
//    }
//
//}