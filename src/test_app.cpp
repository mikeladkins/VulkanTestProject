#include "headers/test_app.hpp"
#include <GLFW/glfw3.h>

namespace ve
{
  void TestApp::run()
  {
    while(!veWindow.shouldClose())
    {
      // Main Game Loop
      glfwPollEvents();
    }
  }
}
