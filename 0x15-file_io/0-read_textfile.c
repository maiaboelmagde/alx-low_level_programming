#include "main.h"

/**
 * read_textfile - function that
 * reads a text file and prints it to the POSIX standard output.
 *
 * @filename: File to print from.
 * @letters: number of letters to print.
 *
 * Return: the actual number of letters it could read and print.
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *str;
	int writeLen, readLen;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	str = malloc(sizeof(char) * letters);

	if (f == -1 || str == NULL)
		return (0);

	readLen = read(f, str, letters);

	if (readLen == -1)
	{
		free(str);
		return (0);
	}

	writeLen = write(STDOUT_FILENO, str, readLen);

	free(str);
	close(f);

	if (writeLen == -1)
		return (0);

	return (writeLen);

}
