#ifndef PET_H
#define PET_H

class Pet
{
public:
	virtual const char * say() = 0;
	virtual bool gnaw() = 0;
protected:
	friend void pets( bool flag = false );
	int lifes(); 
};

#endif//PET_H