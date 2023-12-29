#include "main.h"
/**
 * read_textfile - Read a text file and prints the letter
 * @filename: filename
 * @letters: number of letters printed
 * Return: Number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	rd = read(fp, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	close(fp);
	free(buf);

	return (wr);
}
