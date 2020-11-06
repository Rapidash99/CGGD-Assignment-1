#pragma once


#include "clear_rendertarget.h"

namespace cg
{

	class LineDrawing : public ClearRenderTarget
	{
	public:
		LineDrawing(unsigned short width, unsigned short height);
		~LineDrawing() override;

		void DrawLine(unsigned xBegin, unsigned yBegin, unsigned xEnd, unsigned yEnd, color color);

        virtual void DrawScene();

	};

}
