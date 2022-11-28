#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
	char *s;
	
	if (s1 == 0
		&& s2 == 0)
		return 0;
	else if (s1 == 0
		&& s2 != 0)
		return mx_strdup(s2);
	else if (s1 != 0
		&& s2 == 0)
		return mx_strdup(s1);
	
	s = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
	mx_strcat(s, s1);
	mx_strcat(s,s2);
	return s;
}

