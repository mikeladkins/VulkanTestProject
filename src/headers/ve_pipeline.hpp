#pragma once

#include <string>
#include <vector>
namespace ve
{
  class VePipeline
  {
    public:
      VePipeline(const std::string& vertFilePath, const std::string& fragFilePath);

    private:
      static std::vector<char> readFile(const std::string& filepath);
      void createGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath);
  };
}
