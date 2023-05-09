#include "main.h"
/**
 * read_textfile - reads txt file
 * @filename: file to copy
 * @letters: n of char to copy
 *
 * Return: no. of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	int fd;
	char *temp;
	
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	temp = malloc(letters);
	if (!temp)
		return (0);
	i = read (fd, temp, letters);
	if (i < 0)
		return (0);
	i = write(STDOUT_FILENO, temp, i);
	if (i < 0)
		return (0);
	close(fd);
	return (i);
}
