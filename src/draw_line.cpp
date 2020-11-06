#include "draw_line.h"

#include <cmath>
#include <algorithm>

#define M_PI 3.14159265358979323846


cg::LineDrawing::LineDrawing(unsigned short width, unsigned short height): cg::ClearRenderTarget(width, height) { }

cg::LineDrawing::~LineDrawing() = default;

void cg::LineDrawing::DrawLine(unsigned xBegin, unsigned yBegin, unsigned xEnd, unsigned yEnd, color color) {

	const bool steep = abs((int)yEnd - (int)yBegin) > abs((int)xEnd - (int)xBegin);
	
	if (steep) {
		std::swap(xBegin, yBegin);
		std::swap(xEnd, yEnd);
	}

	if (xBegin > xEnd) {
		std::swap(xBegin, xEnd);
		std::swap(yBegin, yEnd);
	}

	const float dx = ((float)xEnd - (float)xBegin);
	const float dy = std::abs((float)yEnd - (float)yBegin);
	float error = dx / 2.f;
	const int yStep = (yBegin < yEnd) ? 1 : -1;
	unsigned y = yBegin;

	for (unsigned x = xBegin; x <= xEnd; x++) {
		if (steep) {
			SetPixel(y, x, color);
		}
		else {
			SetPixel(x, y, color);
		}
			
		error -= dy;

		if (error < 0) {
			y += yStep;
			error += dx;
		}
	}
}

void cg::LineDrawing::DrawScene() {

    unsigned xCenter = width / 2;
    unsigned yCenter = height / 2;
	unsigned radius = std::min(xCenter, yCenter) - 1;

	for (double angle = 0.0; angle < 360.0; angle += 5.0) {
		DrawLine(
		        xCenter,
		        yCenter,
		        static_cast<unsigned>(xCenter + radius * cos(angle * M_PI / 180)),
		        static_cast<unsigned>(yCenter + radius * sin(angle * M_PI / 180)),
		        color(
		                static_cast<unsigned char>(255 * sin(angle * M_PI / 180)),
		                static_cast<unsigned char>(255 * cos(angle * M_PI / 180)),
		                255
		                )
                );
	}
}

