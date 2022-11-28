#include "../inc/libmx.h"

void mx_printint(int n) {
	if (n == 0) {
		mx_printchar('0');
		return;
	}
	if (n == -2147483648) {
		write(1, "-2147483648", 11);
		return;
	}
	if (n < 0) {
		n *= -1;
		mx_printchar('-');
	}
	if (n > 9)
		mx_printint(n / 10);
	
	int c = n % 10 + 48;
	mx_printchar(c);
}

