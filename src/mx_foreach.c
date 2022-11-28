#include "../inc/libmx.h"

void mx_foreach(int *arr, int size, void (*f)(int)) {
	for (int j = 0; j < size; j++)
		f(arr[j]);
}

