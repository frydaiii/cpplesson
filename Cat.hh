#ifndef CAT_H
#define PET_H

class Cat : Pet
{
public:
	virtual const char * say( void ) { return "miaow" ; }
	virtual bool gnaw( void* ) { return false; }
protected:
	virtual int lifes( void ) { return 9; }
};

#endif//CAT_H