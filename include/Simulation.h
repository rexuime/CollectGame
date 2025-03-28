#include "Intersection.h"

class Simulation{

    private:

        std::unique_ptr<Intersection>  intersection;
        std::unique_ptr<Intersection> SelectSim();

    public:

        static void RunSim();

};