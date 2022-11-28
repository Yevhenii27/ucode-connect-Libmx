#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
	char *ddst = (char*)dst;
	char *ssrc = (char*)src;
	char *tmp = (char*)malloc(sizeof(char) * len);
	
	if (tmp == NULL)
		return NULL;
	
	for (size_t i = 0; i < len; i++) {
		*(tmp + i) = *(ssrc + i);
		*(ddst + i) = *(tmp + i);
	}
	
	free(tmp);
	return dst;
}

