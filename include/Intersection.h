#pragma once

#include "TrafficLight.h"
#include "Car.h"

class Intersection{

    private:

        const int numLights;

    public:

        Intersection(int lights) : numLights(lights) {}
        int GetNumLights() const;

};


class FourWayIntersection : public Intersection{

    private:


    public:

        // Only two lights because technically NS and EW traffic lights have same state at the same time
        FourWayIntersection() : Intersection(2) {}

};