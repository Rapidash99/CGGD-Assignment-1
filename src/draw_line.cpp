#include "draw_line.h"


#define _USE_MATH_DEFINES
#include <math.h>

#include <algorithm>


cg::LineDrawing::LineDrawing(unsigned short width, unsigned short height): cg::ClearRenderTarget(width, height)
{
    throw std::runtime_error("Not implemented yet");
}

cg::LineDrawing::~LineDrawing()
{
    throw std::runtime_error("Not implemented yet");
}

void cg::LineDrawing::DrawLine(unsigned short x_begin, unsigned short y_begin, unsigned short x_end, unsigned short y_end, color color)
{
	throw std::runtime_error("Not implemented yet");
}

void cg::LineDrawing::DrawScene()
{
    unsigned short x_center = width / 2;
    unsigned short y_center = height / 2;
	unsigned short radius = std::min(x_center, y_center) - 1;
	for (double angle = 0.0; angle < 360.0; angle += 5.0)
	{
		DrawLine(x_center, y_center, static_cast<unsigned short>(x_center + radius * cos(angle * M_PI / 180)), static_cast<unsigned short>(y_center + radius * sin(angle * M_PI / 180)),
            color(static_cast<unsigned char>(255 * sin(angle * M_PI / 180)), static_cast<unsigned char>(255 * cos(angle * M_PI / 180)), 255));
	}

}

