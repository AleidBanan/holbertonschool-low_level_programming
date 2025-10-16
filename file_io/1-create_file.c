#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
* create_file - creates file and writes text content
* @filename: file to create
* @text_content: string characters to be written
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	size_t len;

	ssize_t w_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);
	w_bytes = write(fd, text_content, len);
	if (w_bytes == -1 || w_bytes != (ssize_t)len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
