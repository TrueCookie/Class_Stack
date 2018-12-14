#include <iostream>
#include "stack.h"
#include "node_t.h"
#include "list.h"

int* stack::pop() {
	if (!is_empty()) {
		int* tmp_val = new int(top->value);
		node_t* tmp_top = top;
		top = top->prev;

		size--;

		return tmp_val;
	}
	return nullptr;
}

void stack::read_stack() {
	while (!is_empty()) {
		std::cout << *pop() << " ";
	}std::cout << std::endl;
}

void stack::reverse() {
	node_t *t = nullptr;
	node_t *y = top;
	node_t *r = nullptr;
	while (y != nullptr) {
		t = y->prev;
		y->prev = r;
		r = y;
		y = t;
	}
	top = r;

	delete t, y, r;
}
