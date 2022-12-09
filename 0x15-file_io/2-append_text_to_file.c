#include "main.h"

 /**
  * append_text_to_file - appends text at the end of a file.
  * @filename: file name
  * @text_content: is the NULL terminated string to
  * add at the end of the file
  *
  * Return: 1 on success and -1 on failure
  * If filename is NULL return -1
  * If text_content is NULL return -1 else return 1 if the file exists
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(file_descriptor);
	if (len == -1)
		return (-1);
	return (1);
}

/**
 * _strlen - finds the length of a string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
