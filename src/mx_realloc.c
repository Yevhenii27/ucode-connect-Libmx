#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	void *newptr = NULL;
	
	if (size) {
		if (!ptr)
			return malloc(size);
		
		newptr = malloc(size);
		if (newptr) {
			mx_memcpy(newptr, ptr, size);
			free(ptr);
		}
	}
	
	return newptr;
}

