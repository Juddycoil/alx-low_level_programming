#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	r = read(fd, buff, letters);
	if (r < 0)
	{
		free(buff);
		return (0);
	}
	buff[r] = '\0';

	close(fd);

	w = write(STDOUT_FILENO, buff, r);
	if (w < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (w);
}

