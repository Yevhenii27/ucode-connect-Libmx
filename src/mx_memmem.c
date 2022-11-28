#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len,
	const void *little, size_t little_len) {
	char *bf = (char*)big;
	char *pt = (char*)little;
	char *p = bf;
	
	while (little_len <= (big_len - (p - bf))) {
		if (mx_memchr(p, *pt, big_len - (p - bf)) != NULL) {
			if (mx_memcmp(p, little, little_len) == 0)
				return p;
			else
				++p;
		}
		else
			break;
	}
	
	return NULL;
}
	
