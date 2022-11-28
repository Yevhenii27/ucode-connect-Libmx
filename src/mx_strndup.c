#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	if (s1 == NULL)
		return NULL;
		
	char *dst = NULL;
	char *temp;
	
	dst = mx_strnew(n);
	temp = mx_strncpy(dst, s1, n);
	return temp;
}

