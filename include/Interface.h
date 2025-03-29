#pragma once

#include "Intersection.h"

#define GRID_SIZE 10

// TODO Get this working first with simulation and interesection before working on smaller bits

class Interface{

    private:

        std::array<std::array<char, GRID_SIZE>, GRID_SIZE> grid;

    public:

        Interface();
        void ClearGrid();


};