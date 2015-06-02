
#include "Actor.h"

Actor::Actor(Grid g, int r, int c)
{
    grid = &g;
    row = r;
    col = c;
}

Actor::~Actor()
{
    //dtor
}
