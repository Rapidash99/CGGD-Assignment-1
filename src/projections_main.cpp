#include "projections.h"

#include <iostream>

int main(int argc, char* argv[])
{
    try
    {
        cg::Projections* render = new cg::Projections(1920, 1080, "models/cube.obj");

        render->Clear();

        render->DrawScene();

        render->Save("results/projection.png");

        // Just show the resulted image
        system("start results/projection.png");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}