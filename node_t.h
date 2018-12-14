#pragma once
struct node_t {
	node_t() {
		prev = nullptr;
	}
	int value;
	node_t* prev;
};