#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: content to write in da fiel
 * Return: 1 if it success. -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int f, len, rf;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	rf = write(f, text_content, len);

	if (rf == -1)
		return (-1);

	close(rf);

	return (1);
}
