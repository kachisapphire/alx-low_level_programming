#include "main.h"
/**
 *read_textfile - main function
 *@filename: name of the file
 *@letters: content of character
 *Return: number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numrd, numwr;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	numrd = read(fd, buffer, letters);
	numwr = write(STDOUT_FILENO, buffer, numrd);
	close(fd);
	free(buffer);
	return (numwr);
}
