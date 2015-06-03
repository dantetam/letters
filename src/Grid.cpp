
#include <vector>

#include "Grid.h"

Grid::Grid(int r, int c)
{
    std::vector < std::vector < Actor* > > tube;
    tube.resize(r);
    for (int i = 0; i < r; i++)
    {
       tube[i].resize(c);
    }
    actors = &tube;
    //actors.resize(r, std::vector<Actor>());
    rows = r;
    cols = c;
}

Grid::~Grid()
{
    //dtor
}

Actor Grid::addActor(int r, int c)
{
    Actor actor(*this, r, c);
    actors -> at(r).at(c) = &actor;
    return actor;
}
