#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <memory>

enum class Direction { NORTH, SOUTH, EAST, WEST };
enum class Turn { LEFT, RIGHT, STRAIGHT };

class Car{

    protected:

        int ID;
        Direction spawnLocation;
        Turn intent;

    public:




};