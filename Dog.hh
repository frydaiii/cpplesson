#ifndef DOG_H
#define DOG_H

class Dog : public Pet // change to public inheritance
{
public:
	virtual const char * say() { return "bow-wow" ; }
	virtual bool gnaw() { return true; } 
protected:
};

#endif//DOG_H