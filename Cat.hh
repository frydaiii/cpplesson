#ifndef CAT_H
#define CAT_H
#include "Pet.hh"

class Cat : public Pet // change to public inheritance
{
public:
	virtual const char * say() { return "miaow" ; } // update parameter
	virtual bool gnaw() { return false; } // update parameter
protected:
	virtual int lifes( void ) { return 9; }
};

#endif//CAT_H