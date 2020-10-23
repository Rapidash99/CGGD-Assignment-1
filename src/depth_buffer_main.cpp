#include "depth_buffer.h"

#include <iostream>

int main(int argc, char* argv[])
{
    try
    {
        cg::ZCulling* render = new cg::ZCulling(1920, 1080, "models/z_test.obj");

        render->Clear();

        render->DrawScene();

        render->Save("results/depth_buffer.png");

        // Just show the resulted image
        system("start results/depth_buffer.png");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}