#include "TrafficLight.h"
#include "Car.h"

class Intersection{


    public:


};


class FourWayIntersection : public Intersection{

    private:

        // Only two because technically NS and EW traffic lights have same state at the same time
        const int numLights = 2;

};