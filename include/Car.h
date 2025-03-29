#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <memory>

enum class Direction { NORTH, SOUTH, EAST, WEST };
enum class Turn { LEFT, RIGHT, STRAIGHT };

class Car{

    // TODO Implement thread variable for this class so each car is a separate entity

    private:

        int ID;
        Direction spawnLocation;
        Turn intent;

    public:




};