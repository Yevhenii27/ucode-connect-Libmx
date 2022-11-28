#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	char *hex = mx_strnew(sizeof(nbr));
	int i = 0;
	
	while (nbr != 0) {
		int temp = 0;
		
		temp = nbr % 16;
		if (temp < 10) {
			hex[i] = temp + 48;
			i++;
		}
		else {
			hex[i] = temp + 87;
			i++;
		}
		
		nbr /= 16;
	}
	
	mx_str_reverse(hex);
	return hex;
}

