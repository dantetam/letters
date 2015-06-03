#ifndef ACTOR_H
#define ACTOR_H

#include "Grid.h"

class Grid;

class Actor
{
    public:
        Actor(Grid g, int r, int c);
        virtual ~Actor();
        int row;
        int col;
    protected:
        Grid* grid;
    private:
};

#endif // ACTOR_H
