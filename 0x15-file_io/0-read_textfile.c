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
	char buffer[2049];
	int fd;
	ssize_t helper, helper1;

	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	helper = read(fd, buffer, letters);


	helper1 = write(STDOUT_FILENO, buffer, helper);
	close(fd);
	return (helper1);
}
