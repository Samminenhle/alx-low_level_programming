#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer
 * @letter: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0 if the file can not be opened or read,
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_check, count;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_check = read(file, buf, letters);
	if (count == -1 || read_check != count)
		return (0);

	free(buf);

	close(file);
	return (count);
}
