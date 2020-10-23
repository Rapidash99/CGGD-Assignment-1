#include "triangle_rasterization.h"

#include <iostream>

int main(int argc, char* argv[])
{
    try
    {
        cg::TriangleRasterization* render = new cg::TriangleRasterization(1920, 1080, "models/cube.obj");

        render->Clear();

        render->DrawScene();

        render->Save("results/triangle_rasterization.png");

        // Just show the resulted image
        system("start results/triangle_rasterization.png");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}