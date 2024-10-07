#pragma once

#include "ve_pipeline.hpp"
#include "ve_window.hpp"
#include <GLFW/glfw3.h>

namespace ve
{
  class TestApp
  {
    public:
      static constexpr int WIDTH  = 800;
      static constexpr int HEIGHT = 600;

      void run();
    private:
      VeWindow veWindow{WIDTH, HEIGHT, "Test App Window"}; 
      VePipeline vePipeline{"../src/shaders/simple_shader.vert.spv", "../src/shaders/simple_shader.frag.spv"};
  };
}
