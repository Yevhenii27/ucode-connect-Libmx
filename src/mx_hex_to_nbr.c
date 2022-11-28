#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long nbr = 0;
	
	for (int i = 0; hex[i] != '\0'; i++) {
		int n;
		
		if (hex[i] >= '0' && hex[i] <= '9')
			n = hex[i] - '0';
		else if (hex[i] >= 'A' && hex[i] <= 'Z')
			n = hex[i] - 'A' + 10;
		else
			n = hex[i] - 'a' + 10;
		
		nbr *= 16;
		nbr += n;
	}

	return nbr;
}

