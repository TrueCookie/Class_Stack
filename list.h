#pragma once
#include "collection.h"
class list : public collection {
private:
	list* next;
public:
	virtual void read_stack() = 0;	//redefine
};