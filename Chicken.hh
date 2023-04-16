#include <cstdlib>

class Egg;

class Chicken {
public:
	Egg * creator;
	Egg getCreator()
	{
		if (!creator) exit(1);
		return *creator;
	}
};

