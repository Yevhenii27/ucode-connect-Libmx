#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
	char *s1 = (char*)str;
	char *s2 = (char*)str;
	
	while (*s1 != '\0') {
		if (mx_isspace(*s1)) {
			if (*s1 != *str) {
				*s2 = *s1;
				s2++;
				s1++;
			}
			
			while (mx_isspace(*s1))
				s1++;
		}
		else {
			*s2 = *s1;
			s2++;
			s1++;
		}
	}
	
	if (mx_isspace(*(s2 - 1)))
		s2--;
	
	*s2 = '\0';
	return (char*)str;
}

