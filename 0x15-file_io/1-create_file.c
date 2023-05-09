#include "main.h"
/**
 * create_file - creates file
 * @filename: name of file to create
 * text_content: contents
 *
 * Return:1/ -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND | O_CREAT);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[i] != '\0')
	       i++;	
	fd = write(fd, text_content, i);
	if (fd < 0)
		return (-1);
	close(fd);
	return (1);
}
