#include <cstdlib>

class Egg;

class Chicken {
public:
	Egg * creator;
	Egg getCreator(); // only declaration
};

