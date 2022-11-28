#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
	char *end;
	
	while (mx_isspace((char)*str))
		str++;
		
	if (*str == 0)
		return (char*)str;
	
	end = (char*)str + mx_strlen(str) - 1;
	while (end > str && mx_isspace((char)*end))
		end--;
	
	end[1] = '\0';
	return (char*)str;
}

