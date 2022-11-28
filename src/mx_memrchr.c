#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
	char *ss = (char*)s + n - 1;
	
	while (n--) {
		if (*ss == c)
			return ss;
		
		ss--;
	}
	
	return NULL;
}

