#include "main.h"
/**
 * append_text_to_file - appends text at end of a file
 * @filename: filename
 * @text_content: added content
 * Return: 1 if the file exists
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int number;
	int wr;

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content)
	{
		for (number = 0; text_content[number]; number++)
			;
		wr = write(fp, text_content, number);
		if (wr == -1)
			return (-1);
	}
	close(fp);

	return (1);
}
