#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: File to create
 * @text_content: what to write in file.
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write “fails”, etc.)
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int f, wr;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	wr = write(f, text_content, strlen(text_content));

	if (wr == -1)
		return (-1);

	close(f);
	return (1);

}
