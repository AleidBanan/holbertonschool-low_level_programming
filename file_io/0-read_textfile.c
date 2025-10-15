#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
* read_textfile - opens file then reads and write letters
* @filename: file to read
* @letters: letters to be written
*
* Return: letters or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)

{

	int fd;

	char *temp;

	ssize_t r_bytes, w_bytes;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		close(fd);
		return (0);
	}

	r_bytes = read(fd, temp, letters);
	if (r_bytes == -1)
	{
		free(temp);
		close(fd);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, temp, r_bytes);
	if (w_bytes == -1 || w_bytes != r_bytes)
	{
		free(temp);
		close(fd);
		return (0);
	}

	free(temp);
	close(fd);
	return (w_bytes);
}
