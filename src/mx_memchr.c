#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
	char *str = (char*)s;
	
	while (s != NULL && n--) {
		if (*str != c)
			str++;
		else
			return str;
	}
	
	return NULL;
}

