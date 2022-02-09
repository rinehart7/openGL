#pragma once

#include <vector>


class Cube
{
    public:

        float x;
        float y;
        float z;
        std::vector<float> vertices;
        std::vector<unsigned int> indices;
		std::vector<float> texCoords;
        Cube(float x, float y, float z);
};