#include "parser.hpp"

#include <fstream>
#include <sstream>
#include <iostream>

bool parser::readFile(std::string Path) {
    std::ifstream file(Path);
    if (!file.is_open()) {
        std::cout << "Cannot read file" << std::endl;
        return -1;
    }
    std::stringstream buffer;
    buffer << file.rdbuf();

    std::string line;
    while (std::getline(buffer, line))
    {
        std::istringstream iss(line);
        std::string prefix;
        iss >> prefix;
        if (prefix == "v") {
            vertex v;
            iss >> v.x >> v.y >> v.z;
            vertices.push_back(v);
        }
    }
    return true;
}
const std::vector<vertex>& parser::getVertices() const{
    return vertices;
}