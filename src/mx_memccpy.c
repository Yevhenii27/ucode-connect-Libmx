#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src,
	int c, size_t n) {
	char *ssrc = (char*)src;
	char *ddst = (char*)dst;
	char ch;
	
	for (size_t i = 0; i < n; i++) {
		ddst[i] = ch = ssrc[i];
		if (ch == '\0')
			break;
		if (ch == c)
			return &ddst[i + 1];
	}
	
	return NULL;
}

