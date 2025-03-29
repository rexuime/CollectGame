#pragma once

#include "Intersection.h"
#include "Interface.h"

class Simulation{

    private:

        std::unique_ptr<Intersection>  intersection;
        Interface ui;
        std::unique_ptr<Intersection> SelectSim();

    public:

        static void RunSim();

};