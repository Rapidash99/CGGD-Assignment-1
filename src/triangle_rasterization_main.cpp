#include "triangle_rasterization.h"

#include <iostream>
#include <chrono>

int main(int argc, char* argv[])
{
    try
    {
        cg::TriangleRasterization* render = new cg::TriangleRasterization(1920, 1080, "models/CornellBox-Original.obj");
        
        render->Clear();

        auto start = std::chrono::high_resolution_clock::now();

        render->DrawScene();

        auto end = std::chrono::high_resolution_clock::now();

        std::chrono::duration<double> diff = end - start;
        std::cout << "Rendering time: " << diff.count() << "s \n";

        render->Save("results/triangle_rasterization.png");

        // Show the result
        system("start results/triangle_rasterization.png");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}