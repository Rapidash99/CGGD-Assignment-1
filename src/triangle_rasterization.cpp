#include "triangle_rasterization.h"

#define _USE_MATH_DEFINES
#include <math.h>

#include <iostream>


cg::TriangleRasterization::TriangleRasterization(unsigned short width, unsigned short height, std::string obj_file) : cg::Projections(width, height, obj_file)
{
	throw std::runtime_error("Not implemented yet");
}

cg::TriangleRasterization::~TriangleRasterization()
{
	throw std::runtime_error("Not implemented yet");
}

void cg::TriangleRasterization::DrawScene()
{
	throw std::runtime_error("Not implemented yet");
}

void cg::TriangleRasterization::DrawTriangle(float4 triangle[3])
{
	throw std::runtime_error("Not implemented yet");

}

float cg::TriangleRasterization::EdgeFunction(float2 a, float2 b, float2 c)
{
	throw std::runtime_error("Not implemented yet");
}


