#pragma once

#include <string>
#include <vector>

namespace cg
{

	struct color
	{
		unsigned char r;
		unsigned char g;
		unsigned char b;

		color()
		{
			r = 0;
			g = 0;
			b = 0;
		}

		color(unsigned char in_r, unsigned char in_g, unsigned char in_b)
		{
			r = in_r;
			g = in_g;
			b = in_b;
		}
	};


	class ClearRenderTarget
	{
	public:
		ClearRenderTarget(unsigned short width, unsigned short height);
		virtual ~ClearRenderTarget();

		void Clear();
		void Save(std::string filename) const;

	protected:
		void SetPixel(unsigned short x, unsigned short y, color color);

		unsigned short height;
		unsigned short width;

		std::vector<color> frame_buffer;
	};


}

