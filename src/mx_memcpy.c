#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
	char *ssrc = (char*)src;
	char *ddst = (char*)dst;
	
	if (ssrc != NULL && ddst != NULL) {
		while (n) {
			*(ddst++) = *(ssrc++);
			--n;
		}
	}
	
	return dst;
}

