#pragma once
#include "ColorBuffer.h"
#include <string>

class Image 
{ 
public:
	bool Load(const std::string& filename, uint8_t alpha = 255); 
	void Flip();
	ColorBuffer colorBuffer;
	friend class Framebuffer;

//private:
//	uint8_t* buffer;
//	int width;
//	int height;
};