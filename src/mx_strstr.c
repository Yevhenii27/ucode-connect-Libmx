#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
	while (*haystack) {
		if (mx_strncmp(haystack, needle, mx_strlen(needle)) == 0)
			return mx_strchr(haystack, *haystack);

		haystack++;
	}
	
	return NULL;
}

