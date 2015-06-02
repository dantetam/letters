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
        std::vector< std::vector<Actor> > actors;
        int rows, cols;
    protected:
    private:
};

#endif // GRID_H
