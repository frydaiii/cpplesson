#include "Zoo.hh"

Zoo::Egg Zoo::Chicken::getCreator()
{
    if (!creator) exit(1);
    return *creator;
}
Zoo::Chicken Zoo::Egg::getCreator()
{
    if (!creator) exit(1);
    return *creator;
}