#pragma once
#include "node_t.h"
class collection {
protected:
	node_t* top;
	int size;
public:
	collection() {
		top = nullptr;
	};
	~collection() {
		while (!is_empty()) {
			delete top;
		}
	};
	void push(int);
	bool is_empty();
};