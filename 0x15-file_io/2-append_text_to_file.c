#include "main.h"
/**
 * append_text_to_file - appends txt to file
 * @filename: name of file
 * @text_content: char to be appended to file
 *
 * Return: 1 / -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd1;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	fd1 = write(fd, text_content, strlen(text_content));
	if (fd1 < 0)
		return (-1);
	close(fd);
	return (1);
}
