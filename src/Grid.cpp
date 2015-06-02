
#include <vector>

#include "Grid.h"

Grid::Grid(int r, int c)
{
    actors.resize(r, std::vector<Actor>());
    rows = r;
    cols = c;
}

Grid::~Grid()
{
    //dtor
}
