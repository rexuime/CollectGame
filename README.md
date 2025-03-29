# 🕹️ Simple C++ SFML Game

A lightweight game built in C++ using **SFML** where the player moves around a 2D space using arrow keys, collects objects, and avoids obstacles or "monsters" that randomly appear and move across the screen.

This project serves as both a **learning experience** in C++/OOP and an **intro to real-time 2D rendering** with SFML.

---

## 📦 Features

- Arrow key movement for player
- Object-oriented structure with inheritance
- Randomly spawning collectibles and enemies
- Grid-based game logic (with plans to support more)
- Rendered in a resizable SFML window
- Built using a Makefile for automation

---

## 📁 Project Structure

```
TrafficSim/ 

├── include/ # Header files (class declarations) │ 
├── game.h │ 
├── objects.h │ 
└── window.h │ 

├── src/ # Source files (class definitions) │ 
├── game.cpp │ 
├── objects.cpp │ 
└── window.cpp │ 

├── tests/ # (Optional) Unit test files (e.g., test_object.cpp) 

├── main.cpp   # Entry point for running the simulation 
├── Makefile   # Build configuration 
└── README.md   # Project documentation
```
---

## 🛠️ Build Instructions

To build and run the project, make sure you have a C++ compiler (like `g++`) and `make` installed.

```
- make              # Compiles the main simulation and test files
- ./bin/main        # Runs the simulation
- make clean        # Removes compiled binaries and object files
```

---

*You'll need to set up SFML yourself (headers, libs, and .dlls). Make sure your SFML version matches your compiler.*

---

## 🎯 Goals of This Project

- Reinforce modern C++ concepts (OOP, smart pointers, modularity)
- Build and organize a complete project using Make and headers
- Practice real-time input handling and frame-by-frame logic
- Explore basic game logic, state updates, and rendering
- Lay a flexible foundation for more complex game ideas

---

## 🚀 Possible Future Expansions

- Add enemy behavior (chasing, patrolling, etc.)
- Add collectible types (powerups, hazards, score bonuses)
- Create a simple UI or HUD for health/score
- Add menus or pause functionality
- Expand to tile-based maps or multiple levels
- Introduce animations or sound effects
- Integrate unit testing with Catch2

---