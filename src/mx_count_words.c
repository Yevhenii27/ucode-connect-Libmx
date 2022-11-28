#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
	int countw = 0, j = 0;
	
	if (str[0] != c
		&& str[0] != '\0') {
		countw++;
		j++;
	}
	
	while (str[j] != '\0') {
		if (str[j] == c) {
			while (str[j] != '\0' && str[j] == c)
				j++;
				
			if (str[j] != c && str[j] != '\0')
				countw++;
		}
		
		j++;
	}
	
	return countw;
}

