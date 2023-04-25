#include "Worker.hh"

int Worker::Part1 = 0x11;
const int Worker::Part2;
const int Worker::Part3 = 0x44; // ‘static’ may not be used when defining (as opposed to declaring) a static data member

int Worker::part2() // remove inline keyword
{
	return Worker::Part2;
}

int Worker::part3()
{
	return Part3;
}
