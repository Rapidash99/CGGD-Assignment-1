#pragma once


#include "clear_rendertarget.h"

namespace cg
{

	class LineDrawing : public ClearRenderTarget
	{
	public:
		LineDrawing(unsigned short width, unsigned short height);
		virtual ~LineDrawing();

		void DrawLine(unsigned short x_begin, unsigned short y_begin, unsigned short x_end, unsigned short y_end, color color);

		void DrawScene();

	};

}
