#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
	if (file == NULL) return NULL;
	
	char ch;
	int j = 0, file_size = 0;
	int fd = open(file, O_RDONLY);
	
	if (fd < 0) return NULL;
	
	while (read(fd, &ch, 1))
		file_size++;
	
	close(fd);
	fd = open(file, 0);
	char *dst = mx_strnew(file_size);
	while (read(fd, &ch, 1))
		dst[j++] = ch;

	dst[j] = '\0';
	close(fd);
	return dst;
}

