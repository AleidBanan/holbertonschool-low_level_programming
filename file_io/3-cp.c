#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"


int open_file_from(char *file);

int open_file_to(char *file);

void copy_content(int fd_from, int fd_to, char *file_from, char *file_to);

void close_file(int fd);

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file_from(argv[1]);
	fd_to = open_file_to(argv[2]);
	copy_content(fd_from, fd_to, argv[1], argv[2]);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * open_file_from - opens the source file for reading
 * @file: name of the source file
 *
 * Return: file descriptor
 */
int open_file_from(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (fd);
}

/**
 * open_file_to - opens/creates the destination file for writing
 * @file: name of the destination file
 *
 * Return: file descriptor
 */
int open_file_to(char *file)
{
	int fd;

	fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (fd);
}

/**
 * copy_content - reads from source and writes to destination
 * @fd_from: file descriptor of source
 * @fd_to: file descriptor of destination
 * @file_from: name of source file (for error messages)
 * @file_to: name of destination file (for error messages)
 */
void copy_content(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char reader[1024];

	ssize_t r_bytes, w_bytes;

	while ((r_bytes = read(fd_from, reader, 1024)) > 0)
	{
		w_bytes = write(fd_to, reader, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * close_file - closes a file descriptor
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
