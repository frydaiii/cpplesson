#include "start.hh"
#include "stop.hh"
#include "act.hh"
#include "Worker.hh"

extern bool prepared;

void prepare_two()
{
	prepared = true;
	Worker::Part1 = 0x88;
}

void work_two()
{
	start();
	Worker w;
	extern int GoodWork;
	if ( GoodWork == ( w.part1() | w.part2() | w.part3() ) )
	{
		act( "two" );
	}
	stop();
}