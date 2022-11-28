#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
	char *temp1 = (char*)s1;
	char *temp2 = (char*)s2;
	
	if (s1 == s2)
		return 0;
	
	while (n > 0) {
		if (*temp1 != *temp2)
			return *(char*)temp1 - *(char*)temp2;
		
		n--;
		temp1++;
		temp2++;
	}
	
	return 0;
}

