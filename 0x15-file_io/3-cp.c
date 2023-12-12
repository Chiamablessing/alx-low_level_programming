#include "main.h"
/**
 *close_fd - function that closses a file descriptor
 *		the functon exits status 100 on error
 *@fd: file decriptor to be handled
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 *main - entry point of the program
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 on success
 */
int main(int argc, char **argv)
{
	char *src, *dest, buffer[BUFFER_SIZE];
	int ffd, ftd, rd, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = argv[1];
	dest = argv[2];
	ffd = open(src, O_RDONLY);
	rd = read(ffd, buffer, BUFFER_SIZE);
	if (ffd == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	ftd = open(dest, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	while (rd > 0)
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
		wr = write(ftd, buffer, rd);
		if (ftd == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
		rd = read(ffd, buffer, BUFFER_SIZE);
	}

	close_fd(ffd);
	close_fd(ftd);
	return (0);
}
