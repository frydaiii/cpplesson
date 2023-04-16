// add definition of Egg::getCreator() here

#include "Egg.hh"

Chicken Egg::getCreator()
{
    if (!creator) exit(1);
    return *creator;
}