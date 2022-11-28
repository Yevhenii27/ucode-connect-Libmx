#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c) {
	char multibyte[4];
	
	if (c < 0x80) {
		multibyte[0] = (c >> 0 & 0x7F) | 0x00;
		multibyte[1] = '\0';
	}
	else if (c < 0x0800) {
		multibyte[0] = (c >> 6 & 0x1F) | 0xC0;
		multibyte[1] = (c >> 0 & 0x3F) | 0x80;
		multibyte[2] = '\0';
	}
	else if (c < 0x010000) {
		multibyte[0] = (c >> 12 & 0x0F) | 0xE0;
		multibyte[1] = (c >> 6 & 0x3F) | 0x80;
		multibyte[2] = (c >> 0 & 0x3F) | 0x80;
		multibyte[3] = '\0';
	}
	else {
		multibyte[0] = (c >> 18 & 0x07) | 0xF0;
		multibyte[1] = (c >> 12 & 0x3F) | 0x80;
		multibyte[2] = (c >> 6 & 0x3F) | 0x80;
		multibyte[3] = (c >> 0 & 0x3F) | 0x80;
	}
	
	write(1, multibyte, mx_strlen(multibyte));
}

