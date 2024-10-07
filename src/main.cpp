#include "headers/test_app.hpp"
#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main()
{
  ve::TestApp app{};

  try 
  {
    app.run();
  }
  catch (const std::exception &e) 
  {
    std::cerr << e.what() << '\n';
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
