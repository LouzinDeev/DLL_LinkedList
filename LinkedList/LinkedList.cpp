// LinkedList.cpp: define o ponto de entrada para o aplicativo.
//
#include <string.h>
#include "LinkedList.h"

void addValue(linkedList_t** node, int arg1, char arg2, const char* arg3) {
	linkedList_t* newnode = (linkedList_t*)malloc(sizeof(linkedList_t));
	newnode->intvalue = arg1;
	newnode->charvalue = arg2;
	strncpy_s(newnode->str, arg3, 255);
	newnode->next = *node;
	*node = newnode;
}

void printList(linkedList_t* node) {
	do {
		std::cout << "int:" << node->intvalue << " char:" << node->charvalue << " string:" << node->str << std::endl;
		node = node->next;
	} while (node != NULL);
}


