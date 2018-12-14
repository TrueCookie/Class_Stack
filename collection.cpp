#include "collection.h"

void collection::push(int value) {
	node_t* tmp = new node_t();
	tmp->value = value;
	tmp->prev = top;
	top = tmp;

	size++;
}

bool collection::is_empty() {
	return top == nullptr;
}