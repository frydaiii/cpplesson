#include <cstdlib>

class Chicken;

class Egg {
public:
	Chicken * creator;
	Chicken getCreator()
	{
		if (!creator) exit(1);
		return *creator;
	}
};
