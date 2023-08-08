#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a  * file
 * @filename: file proccess for appending
 * @text_content: tex to append to file
 * Return: returns 1 on success and -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}