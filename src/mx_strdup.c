#include "../inc/libmx.h"

char *mx_strdup(const char *s1) {
	char *dst = NULL;
	char *temp;
	int len = mx_strlen(s1);
	
	dst = mx_strnew(len);
	if (s1 == NULL)
		return NULL;
	
	temp = mx_strcpy(dst, s1);
	return temp;
}

