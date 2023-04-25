#ifndef EGG_H
#define EGG_H

#include <cstdlib>

class Chicken;

class Egg {
public:
	Chicken * creator;
	Chicken getCreator(); // only declaration
};

#endif//EGG_H
