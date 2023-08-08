#include "main.h"

/**
 * close_file - close a file
 * @fd: file descriptor (integer) to be handled
 */
void close_file(int fd)
{
	if (close(fd) != 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);

	}
}

void copy_from_to(const char *file_from, const char *file_to)
{
	int fd1, fd2;
	ssize_t bytes_read;
	char buf[BUFFER_SIZE];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((bytes_read = read(fd1, buf, BUFFER_SIZE)) > 0)
	{
		if (write(fd2, buf, bytes_read) < 0)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", file_to);
			close_file(fd2);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file_from);
		close_file(fd1);
		exit(98);
	}
	close_file(fd1);
	close_file(fd2);
}
/**
 *  main - program that copies the content of a file to another file
 *  @argc: number of args
 *  @argv: pointer to pointers of string
 * 
 *  Return: always 0 on success
 */
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	if (!argv[1])
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	copy_from_to(argv[1], argv[2]);
	return (0);
}
