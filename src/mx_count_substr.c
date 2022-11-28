#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
	if (str == NULL || sub == NULL)
		return -1;
	
	int count = 0;
	const char *tmp = str;
	
	if (mx_strlen(sub)) {
		while ((tmp = mx_strstr(tmp, sub))) {
			tmp += mx_strlen(sub);
			count++;
		}
	}
	
	return count;
}

