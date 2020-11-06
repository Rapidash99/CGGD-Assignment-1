#include "draw_line.h"

#include <iostream>

int main([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
    try
    {
        auto* render = new cg::LineDrawing(1920, 1080);

        render->Clear();

        render->DrawScene();

        render->Save("results/draw_line.png");

        // Just show the resulted image
        system("start results/draw_line.png");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}