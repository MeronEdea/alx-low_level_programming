#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t no_of_char_read, no_of_char_written;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	no_of_char_read = read(file_descriptor, buffer, letters);
	no_of_char_written = write(STDOUT_FILENO, buffer, no_of_char_read);

	close(file_descriptor);

	free(buffer);

	return (no_of_char_written);
}