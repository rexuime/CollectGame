#include <Simulation.h>

void Simulation::RunSim(){

    Simulation sim;
    sim.intersection = sim.SelectSim();

    std::cout << "Selection working!\n";
    return;
    // Main execution logic here

}

std::unique_ptr<Intersection> Simulation::SelectSim() {

    std::cout << "Choose an intersection type:\n";
    std::cout << "[1] Four-Way Intersection\n";
    int choice;
    std::cout << "Enter choice here: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
        default:
            return std::make_unique<FourWayIntersection>();
    }

}