#include <io.h>
#include <stdio.h>

int pread(unsigned int fd, char *buf, size_t count, int offset)
{
	if (_lseek(fd, offset, SEEK_SET) != offset) {
		return -1;
	}
	return read(fd, buf, count);
}