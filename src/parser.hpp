#pragma once
#include <string>
#include <vector>

#include "vertex.hpp"

class parser
{
private:
    std::vector<vertex> vertices;
public:
    bool readFile(std::string Path);
    const std::vector<vertex>& getVertices() const;
};