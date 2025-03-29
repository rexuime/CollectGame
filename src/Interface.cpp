#include <Interface.h>

Interface::Interface() {
    ClearGrid();
}

void Interface::ClearGrid() {
    for (auto& row : grid)
        row.fill(' ');
}