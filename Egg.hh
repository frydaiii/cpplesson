#include <cstdlib>

class Chicken;

class Egg {
public:
	Chicken * creator;
	Chicken getCreator(); // only declaration
};
