#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
	char **arr = (char**)malloc((mx_count_words(s, c) + 1) * sizeof(char*));
	int i = 0;
	
	while (*s && *s != '\0') {
		if (*s != c) {
			int word_len = 0;
			int cnt = 0;
			
			while (s[cnt] != '\0' && s[cnt] != c) {
				word_len++;
				cnt++;
			}
			
			arr[i] = mx_strndup(s, word_len);
			i++;
			s += word_len;
		}
		
		s++;
	}
	
	arr[i] = NULL;
	return arr;
}

