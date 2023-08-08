#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: text file to be read
 * @letters:  letters is the number of letters it should
 * read and print
 * Return: returns the actual number of letters it
 * could read and print otherwise 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	file_read = read(fd, buffer, letters);
	if (file_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, file_read);
	if (bytes_written == -1 || bytes_written != file_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);

}
