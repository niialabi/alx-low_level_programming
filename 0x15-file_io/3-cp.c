#include "main.h"

/**
 * main - main function
 * @argc: arg count
 * @argv: parameter array
 *
 * Return: 0-success/ other fail
 */
int main(int argc, char **argv)
{
	/*DECLARATIONS*/
	int fd1, fd2;
	char buffer[1024];
	char *to = NULL, *from = NULL;
	ssize_t read_from, write_to;


	/*CODE*/
	if (argc != 3)
		error_print(97, from, to);
	to = argv[2];
	from = argv[1];
	fd1 = open(from, O_RDONLY);
	if (fd1 == -1)
		error_print(98, from, to);
	fd2 = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		error_print(99, from, to);
	do {
		read_from = read(fd1, buffer, 1024);
		if (read_from == -1)
			error_print(98, from, to);
		write_to = write(fd2, buffer, read_from);
		if (write_to == -1)
			error_print(99, from, to);
	} while (read_from > 0);
	read_from = close(fd1);
	if (read_from == -1)
		error_print(100, from, to);
	write_to = close(fd2);
	if (write_to == -1)
		error_print(100, from, to);



	return (0);
}
/**
 * error_print - prog to print
 * @ret: error code
 * @from: from-file
 * @to: to-file
 */
void error_print(int ret, char *from, char *to)
{
	switch (ret)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			break;
	}
	exit(ret);
}
