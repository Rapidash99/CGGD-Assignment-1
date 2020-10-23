#pragma once


#include "draw_line.h"

#include <linalg.h>
using namespace linalg::aliases;

#include <iostream>
#include <filesystem>


namespace cg
{

	struct face
	{
		float4 vertexes[3];
	};

	class ObjParser
	{
	public:
		ObjParser(std::string filename);
		virtual ~ObjParser();

		void Parse();

		const std::vector<face>& GetFaces();

	protected:
		std::filesystem::path filename;
		std::vector<face> faces;

	};

	class Projections : public LineDrawing
	{
	public:
		Projections(unsigned short width, unsigned short height, std::string obj_file);
		virtual ~Projections();

		void DrawScene();

	protected:
		ObjParser* parser;

	};

}
