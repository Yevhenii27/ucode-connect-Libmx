#include "../inc/libmx.h"

char *mx_itoa(int number) {
	int i = 0;
	int neg = 0;
	char *str = mx_strnew(sizeof(number) / sizeof(int));
	
	if (number == 0) {
		str[i] = '0';
		str[i + 1] = '\0';
		return str;
	}
	
	if (number < 0) {
		neg = 1;
		number = -number;
	}
	
	while (number != 0) {
		int rem = number % 10;
		str[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
		number /= 10;
	}
	
	if (neg == 1)
		str[i++] = '-';
		
	str[i] = '\0';
	mx_str_reverse(str);
	return str;
}

