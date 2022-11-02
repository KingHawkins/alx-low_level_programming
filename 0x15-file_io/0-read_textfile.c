#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * read_textfile - prototype
 * @filename: file to be read to stdout
 * @letters: number of characters to b printd
 * Description: reads text file and prints to stdout
 * Return: 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1025];
	int fd;

	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buffer, letters);
	buffer[letters + 1] = '\0';

	write(fd, buffer, letters);

	close(fd);
	return (0);
}
