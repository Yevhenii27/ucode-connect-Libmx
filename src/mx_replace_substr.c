#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
	char* res;
	int i;
	int count = 0;
	
	for (i = 0; str[i] != '\0'; i++) {
		if (mx_strstr(&str[i], sub) == &str[i]) {
			count++;
			i++;
		}
	}
	
	res = (char*)malloc(i + count * (mx_strlen(replace) - mx_strlen(sub)) + 1);
	i = 0;
	while (*str) {
		if (mx_strstr(str, sub) == str) {
			mx_strcpy(&res[i], replace);
			i += mx_strlen(replace);
			str += mx_strlen(sub);
		}
		else res[i++] = *str++;
	}
	
	res[i] = '\0';	
	return res;
}

