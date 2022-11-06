#include <iostream>
#include "LinkedList.h"

int main(void) {
	linkedList_t *list = nullptr;
	addValue(&list, 10, 'P', "Ola");
	addValue(&list, 25, 'A', "Boludo");
	printList(list);
	getchar();
	return 0;
}