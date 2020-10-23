#include "depth_buffer.h"

#define _USE_MATH_DEFINES
#include <math.h>

#include <iostream>


cg::ZCulling::ZCulling(unsigned short width, unsigned short height, std::string obj_file) : TriangleRasterization(width, height, obj_file)
{
	throw std::runtime_error("Not implemented yet");
}

cg::ZCulling::~ZCulling()
{
}

void cg::ZCulling::DrawScene()
{
    throw std::runtime_error("Not implemented yet");
}

void cg::ZCulling::Clear()
{
    throw std::runtime_error("Not implemented yet");
}

void cg::ZCulling::DrawTriangle(float4 triangle[3])
{
	throw std::runtime_error("Not implemented yet");

}

void cg::ZCulling::SetPixel(unsigned short x, unsigned short y, color color, float z)
{
	throw std::runtime_error("Not implemented yet");
}


