#ifndef PET_H
#define PET_H


class Pet
{
public:
	virtual const char * say() = 0;
	virtual bool gnaw() = 0;
	virtual int lifes() {return 1;};  // move to public and add definition, change to virtual
protected:
	void pets( bool flag = false ); // declare default parameter for friend function
	friend void pets( bool );
};

#endif//PET_H