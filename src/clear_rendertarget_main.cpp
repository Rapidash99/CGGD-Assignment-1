#include "clear_rendertarget.h"

#include <iostream>

#include <chrono>

int main(int argc, char* argv[])
{
    try
    {
        cg::ClearRenderTarget* render = new cg::ClearRenderTarget(1920, 1080);
        
        auto start = std::chrono::high_resolution_clock::now();
        
        render->Clear();

        auto end = std::chrono::high_resolution_clock::now();

        std::chrono::duration<double> diff = end - start;
        std::cout << "Clear time: " << diff.count() << "s \n";

        render->Save("results/clear_rendertarget.png");

        // Just show the resulted image
        system("start results/clear_rendertarget.png");
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}