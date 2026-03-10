#include <iostream>
#include <vector>

#include "parser.hpp"

using namespace std;

string PathToObj = "assets/CurrentObj.obj";

int main() {
    parser parser;

    parser.readFile(PathToObj);
    const auto& vertices = parser.getVertices();

    for (size_t i = 0; i < vertices.size(); ++i) {
        std::cout << "Index " << i << ": " << vertices[i].x << " " << vertices[i].y << " " << vertices[i].z << std::endl;
    }
}