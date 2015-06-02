#ifndef ACTOR_H
#define ACTOR_H

#include "Grid.h"

class Grid;

class Actor
{
    public:
        Actor(Grid g, int r, int c);
        virtual ~Actor();
        Grid* grid;
    protected:
        int row;
        int col;
    private:
};

#endif // ACTOR_H
