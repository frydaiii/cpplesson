#include "12.hh"
#include "Zoo.hh"

enum Type { // rename to avoid conflict
	PersonType,
	AnimalType
};

struct Animal;

struct Person
{
	const char * name;
	const int age;
};

void hard_work();
void chicken_and_egg();
void pets( bool flag = true );

int main( int argc )
{
	Type type = argc ? PersonType : AnimalType;
	if( PersonType == type )
		Person fry = { "Fry" , 26 };

	hard_work();
	chicken_and_egg();
	pets();
}

int GoodWork; // definition outside of function to get external linkage
void hard_work()
{
	int GoodWork = 0x77; // drop extern keyword
	prepare_one();
	work_one();
	GoodWork = 0xEE;
	prepare_two();
	work_two();
}

#include <iostream>

void chicken_and_egg()
{
	// using Zoo::Chicken;
	// typedef Zoo::Egg Egg;
	using namespace Zoo;
	Chicken chicken;
	Egg egg;
	chicken.creator = &egg;
	egg.creator = &chicken;
	Egg e = chicken.getCreator();
	Chicken c = egg.getCreator();
	if( chicken.creator == c.creator 
		&& egg.creator == e.creator )
	{
		using namespace std;
		cout << "the `Chicken and Egg' dilemma is solved!" << endl;
	}
}

#include <cstdio>

void pets(bool flag) // add param
{
	using namespace Zoo;
	Cat cat;
	Dog dog;
	Pet & myCat = cat;
	Pet & myDog( dog );
	printf( "myCat says `%s', gnows %sthing and has %d lifes\n" ,
		myCat.say() , myCat.gnaw() ? "no" : "every" , myCat.lifes() );
	printf( "myDog says `%s', gnows %sthing and has %d lifes/n" ,
		myDog.say() , myDog.gnaw() ? "no" : "every" , myDog.lifes() );
}