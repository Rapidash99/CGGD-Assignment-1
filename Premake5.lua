workspace "Basics of rasterization"
   configurations { "Debug", "Release" }
   language "C++"
   cppdialect "C++17"
   architecture "x64"
   systemversion "latest"
   toolset "v142"
   optimize "Speed"
   buildoptions { "/openmp" }
   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

   targetdir ("bin/%{prj.name}/%{cfg.longname}")
   objdir ("obj/%{prj.name}/%{cfg.longname}")


project "01. Clear render target"
   kind "ConsoleApp"
      includedirs { "src/" }
      includedirs { "lib/stb" }
      files { "lib/stb/stb_image_write.h" }
      files { "src/clear_rendertarget.h", "src/clear_rendertarget.cpp" }
      files { "src/clear_rendertarget_main.cpp" }

--[[
project "02. Draw line"
   kind "ConsoleApp"
      includedirs { "src/" }
      includedirs { "lib/stb" }
      files { "lib/stb/stb_image_write.h" }
      files { "src/clear_rendertarget.h", "src/clear_rendertarget.cpp" }
      files { "src/draw_line.h", "src/draw_line.cpp" }
      files { "src/draw_line_main.cpp" }

project "03. Projections"
   kind "ConsoleApp"
      includedirs { "src/" }
      includedirs { "lib/stb" }
      includedirs { "lib/tinyobjloader" }
      includedirs { "lib/linalg" }
      files { "lib/stb/stb_image_write.h" }
      files { "src/clear_rendertarget.h", "src/clear_rendertarget.cpp" }
      files { "src/draw_line.h", "src/draw_line.cpp" }
      files { "src/projections.h", "src/projections.cpp" }
      files { "src/projections_main.cpp" }

project "04. Triangle rasterization"
   kind "ConsoleApp"
      includedirs { "src/" }
      includedirs { "lib/stb" }
      includedirs { "lib/tinyobjloader" }
      includedirs { "lib/linalg" }
      files { "lib/stb/stb_image_write.h" }
      files { "src/clear_rendertarget.h", "src/clear_rendertarget.cpp" }
      files { "src/draw_line.h", "src/draw_line.cpp" }
      files { "src/projections.h", "src/projections.cpp" }
      files { "src/triangle_rasterization.h", "src/triangle_rasterization.cpp" }
      files { "src/triangle_rasterization_main.cpp" }

project "05. Depth buffer"
   kind "ConsoleApp"
      includedirs { "src/" }
      includedirs { "lib/stb" }
      includedirs { "lib/tinyobjloader" }
      includedirs { "lib/linalg" }
      files { "lib/stb/stb_image_write.h" }
      files { "src/clear_rendertarget.h", "src/clear_rendertarget.cpp" }
      files { "src/draw_line.h", "src/draw_line.cpp" }
      files { "src/projections.h", "src/projections.cpp" }
      files { "src/triangle_rasterization.h", "src/triangle_rasterization.cpp" }
      files { "src/depth_buffer.h", "src/depth_buffer.cpp" }
      files { "src/depth_buffer_main.cpp" }
]]--