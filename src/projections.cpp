#include "Projections.h"

#define _USE_MATH_DEFINES
#include <math.h>

#include <iostream>

#define TINYOBJLOADER_IMPLEMENTATION // define this in only *one* .cc
#include "tiny_obj_loader.h"


cg::ObjParser::ObjParser(std::string filename) :
	filename(filename)
{
	throw std::runtime_error("Not implemented yet");
}


cg::ObjParser::~ObjParser()
{
	throw std::runtime_error("Not implemented yet");
}

void cg::ObjParser::Parse()
{
	throw std::runtime_error("Not implemented yet");
}

const std::vector<cg::face>& cg::ObjParser::GetFaces()
{
	throw std::runtime_error("Not implemented yet");
}



cg::Projections::Projections(unsigned short width, unsigned short height, std::string obj_file) : cg::LineDrawing(width, height)
{
	throw std::runtime_error("Not implemented yet");
}

cg::Projections::~Projections()
{
}

void cg::Projections::DrawScene()
{
	throw std::runtime_error("Not implemented yet");
}


