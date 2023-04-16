// add definition of Chicken::getCreator() here

#include "Chicken.hh"

Egg Chicken::getCreator()
{
    if (!creator) exit(1);
    return *creator;
}