# 🚦 TrafficSim

**TrafficSim** is a C++ project designed to simulate different types of traffic intersections with realistic logic, rules, and signal cycles.

---

## 💡 Features

- ✅ Multiple intersection types (starting with four-way intersections)
- 🚗 Cars spawn from random directions with specific intentions: left, right, or straight
- 🚦 Cars follow realistic traffic rules (e.g., left yields to straight)
- 🟢 Traffic lights cycle through timed phases (e.g., NS green while EW red)
- 📦 Clean project structure with header/source separation
- 🛠️ Built using `make`, with support for expanding test cases

---

## 📁 Project Structure

TrafficSim/ 

```
├── include/ # Header files (class declarations) │ 
├── Car.h │ \
├── Interface.h │ 
├── Intersection.h │ 
├── Simulation.h │ 
└── TrafficLight.h 

├── src/ # Source files (class definitions) │ 
├── Car.cpp │ 
├── Interface.cpp │ 
├── Intersection.cpp │ 
├── Simulation.cpp │ 
└── TrafficLight.cpp 

├── tests/ # (Optional) Unit test files (e.g., test_car.cpp) 

├── main.cpp   # Entry point for running the simulation 
├── Makefile   # Build configuration 
└── README.md   # Project documentation
```
---

## 🛠️ Build Instructions

To build and run the project, make sure you have a C++ compiler (like `g++`) and `make` installed.

- make              # Compiles the main simulation and test files
- ./bin/main        # Runs the simulation
- make clean        # Removes compiled binaries and object files

---

## 🎯 Goals of This Project

- Practice and reinforce core C++ skills
- Build clean, modular, and maintainable code
- Lay the foundation for more complex simulations in the future
- Get comfortable using make, headers, and organizing larger projects
- Experiment with logic-heavy systems (traffic flow, signaling, yielding)

---

## 🔧 Possible Future Expansions

- Add more intersection types (e.g., T-junction, roundabout)
- Implement pedestrian systems or sensor-based triggers
- Include traffic congestion simulation and dynamic rerouting
- Add visual output using SDL2 or ImGui
- Integrate unit testing using Catch2 or a similar framework

---
