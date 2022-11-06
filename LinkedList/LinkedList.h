#pragma once
#include <iostream>
#include <malloc.h>

struct linkedList_t {
	int intvalue;
	char charvalue;
	char str[255];
	linkedList_t* next;
};

#ifdef __cplusplus
extern "C" {
#endif

	void __stdcall addValue(linkedList_t** node, int arg1, char arg2, const char* arg3);

	void __stdcall printList(linkedList_t* node);



#ifdef __cplusplus
}
#endif

