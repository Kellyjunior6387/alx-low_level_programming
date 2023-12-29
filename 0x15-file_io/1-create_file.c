#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: Content to be written in the file
 * Return: 1 if succesful
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int number;
	int wr;

	if (!filename)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (number = 0; text_content[number]; number++)
		;
	wr = write(fp, text_content, number);

	if (wr == -1)
		return (-1);
	close(fp);
	return (1);
}
