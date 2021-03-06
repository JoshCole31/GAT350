#pragma once 

#include "Renderer.h" 

struct ColorBuffer
{

	~ColorBuffer() { delete[] data; }

    ColorBuffer() = default;
    ColorBuffer(const ColorBuffer & other)
    {
        width = other.width;
        height = other.height;

        if (other.data)
        {
            data = new uint8_t[width * height * sizeof(color_t)];
            memcpy(data, other.data, width * height * sizeof(color_t));
        }
    }

	//void BoxBlur(const ColorBuffer& colorBuffer);

	uint8_t* data{ nullptr };

	int width = 0;

	int height = 0;

	int pitch = 0;

};