#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
	if (str == NULL || sub == NULL)
		return -2;
	
	char *res = mx_strstr(str, sub);
	
	int index = res - str;
	
	if (index >= 0)
		return index;
	
	return -1;
}

