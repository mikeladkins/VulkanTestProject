#include "headers/ve_pipeline.hpp"
#include <fstream>
#include <iostream>

namespace ve
{
   VePipeline::VePipeline(const std::string& vertFilePath, const std::string& fragFilePath)
   {
     createGraphicsPipeline(vertFilePath, fragFilePath); 
   }

   std::vector<char> VePipeline::readFile(const std::string& filepath) 
   {
     std::ifstream file(filepath, std::ios::ate | std::ios::binary);

     if(!file.is_open())
     {
       throw std::runtime_error("Failed to open file: " + filepath);
     }

     size_t fileSize = static_cast<size_t>(file.tellg());
     std::vector<char> buffer(fileSize);

     file.seekg(0);
     file.read(buffer.data(), fileSize);

     file.close();

     return buffer;
   }

   void VePipeline::createGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath)
   {
     auto vertCode = readFile(vertFilePath);
     auto fragCode = readFile(fragFilePath);

     std::cout << "Vertex Code Size: " << vertCode.size() << '\n';
     std::cout << "Fragment Code Size: " << fragCode.size() << '\n';
   }
}
