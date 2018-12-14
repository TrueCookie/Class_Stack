//#pragma once
#include "collection.h"

class stack : public collection {
public:
	int* pop();
	void reverse();
	void read_stack();
};