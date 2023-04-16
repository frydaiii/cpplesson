#include "start.hh"
#include "stop.hh"
#include "act.hh"
#include "Worker.hh"

bool prepared = false;

void prepare_one()
{
	prepared = true;
	Worker::Part1 = 0x11;
}

void work_one()
{
	start();
	Worker w;
	extern int GoodWork;
	if ( GoodWork == ( w.part1() | w.part2() | w.part3() ) )
	{
		act( "one" );
	}
	stop();
}