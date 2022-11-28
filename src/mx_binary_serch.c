#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int low = 0;
	int high = size - 1;
	int middle;

	while (low <= high) {
		middle = (low + high) / 2;
		(*count)++;
		if (mx_strcmp(arr[middle], s) > 0)
			high = middle - 1;
		else if (mx_strcmp(arr[middle], s) < 0)
			low = middle + 1;
		else
			return middle;
	}
	
	if (low > high) {
		*count = 0;
		return -1;
	}
	
	return -1;
}

