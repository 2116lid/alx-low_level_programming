#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, k, wri;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		k = strlen(text_content);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	wri = write(fd, text_content, k);

	if (wri == -1)
		return (-1);

	close(fd);
	return (1);
}
