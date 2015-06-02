#ifndef GRID_H
#define GRID_H

#include <vector>

#include "Actor.h"

class Actor;

class Grid
{
    public:
        Grid(int r, int c);
        virtual ~Grid();
        std::vector<Actor> actors(10, Actor(this,5,5));
    protected:
    private:
};

#endif // GRID_H
