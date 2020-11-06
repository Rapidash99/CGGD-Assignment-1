#pragma once


#include "draw_line.h"

#include <linalg.h>
using namespace linalg::aliases;
using namespace linalg::ostream_overloads;
#include <iostream>
#include <filesystem>


namespace cg
{

    struct face
    {
        float4 vertexes[3];
        unsigned primitive_id;
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

    struct ConstantBuffer
    {
        float4x4 World;
        float4x4 View;
        float4x4 Projection;
    };

    class Projections : public LineDrawing
    {
    public:
        Projections(unsigned short width, unsigned short height, std::string obj_file);
        virtual ~Projections();

        virtual void DrawScene();

    protected:
        ObjParser* parser;
        ConstantBuffer cb;

        float4 VertexShader(float4 face);
        void Rasterizer(face face);
        virtual void DrawTriangle(face face);

    };

}
