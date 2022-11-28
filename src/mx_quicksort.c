#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
	if (arr == NULL)
		return -1;
	
	static int swap = 0;
	
	if (left < right) {
		int low = left;
		int high = right;
		int pivot = mx_strlen(arr[right]);
		
		while (low <= high) {
			while (mx_strlen(arr[low]) < pivot)
				low++;
			
			while (mx_strlen(arr[high]) > pivot)
				high--;
			
			if (low <= high) {
				if (mx_strlen(arr[low]) != mx_strlen(arr[high])) {
					swap++;
					char *temp = arr[low];
					
					arr[low] = arr[high];
					arr[high] = temp;
				}
				
				high--;
				low++;
			}
		}
		
		mx_quicksort(arr, left, high);
		mx_quicksort(arr, low, right);
	}
	
	return swap;
}

