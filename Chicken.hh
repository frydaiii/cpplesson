// #ifndef CHICKEN_H
// #define CHICKEN_H

#include <cstdlib>

class Egg;

class Chicken {
public:
	Egg * creator;
	Egg getCreator(); // only declaration
};

// #endif//CHICKEN_H
