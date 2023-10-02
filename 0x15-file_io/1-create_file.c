#include "main.h"
/**
 *creat_file - main function
 *@filename: name of file
 *@text_content: string to create
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int i;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		;
	i = write(fd, text_content, letters);
	if (i == -1)
		return (-1);
	close (fd);
	return (1);
}
