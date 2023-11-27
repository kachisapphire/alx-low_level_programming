#include "main.h"
/**
 *read_textfile - function to execute
 *@filename: fle to be read
 *@letters: the letters to read
 *Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numread, numwrite;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	numread = read(fd, buffer, letters);
	numwrite = write(STDOUT_FILENO, buffer, numread);
	close(fd);
	free(buffer);
	return (numwrite);
}
