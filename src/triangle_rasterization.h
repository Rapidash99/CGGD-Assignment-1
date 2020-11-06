#pragma once


#include "projections.h"

namespace cg
{


	class TriangleRasterization : public Projections
	{
	public:
		TriangleRasterization(unsigned short width, unsigned short height, std::string obj_file);
		virtual ~TriangleRasterization();
		void DrawScene();
	
	protected:
		void DrawTriangle(face face);
		color PixelShader(float2 coordinates, float3 bary, unsigned id = 0);
		float EdgeFunction(float2 a, float2 b, float2 c);
	};

}
