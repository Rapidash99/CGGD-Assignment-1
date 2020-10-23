#include "clear_rendertarget.h"

#define STBI_MSC_SECURE_CRT
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#include <stdexcept>


cg::ClearRenderTarget::ClearRenderTarget(unsigned short width, unsigned short height):
    width(width),
    height(height)
{
    throw std::runtime_error("Not implemented yet");
}

cg::ClearRenderTarget::~ClearRenderTarget()
{
    throw std::runtime_error("Not implemented yet");
}

void cg::ClearRenderTarget::Clear()
{
    throw std::runtime_error("Not implemented yet");
}

void cg::ClearRenderTarget::Save(std::string filename) const
{
    throw std::runtime_error("Not implemented yet");
}

void cg::ClearRenderTarget::SetPixel(unsigned short x, unsigned short y, color color)
{
    throw std::runtime_error("Not implemented yet");
}
