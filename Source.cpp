#include <iostream>
#include <conio.h>
#include "stack.h"

int main() {
	stack my_stack;

	int slots_amount = 0;
	std::cout << "Input the amount of slots: ";
	std::cin >> slots_amount;

	for (int i = 0; i < slots_amount; ++i) {
		my_stack.push(i);
	}
	my_stack.reverse();
	my_stack.read_stack();

	_getch();
	return 0;
}

