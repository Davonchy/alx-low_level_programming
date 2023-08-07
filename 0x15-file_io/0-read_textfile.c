#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: The buffer that stores the content
 * of the file
 * @letters: The content of the file.
 *
 * Return: the actual number of letters it
 * could read and print
 * or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t w;
ssize_t r;
char *buffer;
fd = open(filename, O_RDONLY);
buffer = malloc(sizeof(char) * letters);
if (fd == -1)
return (0);
r = read(fd, buffer, letters);
if (r == -1)
return (0);
w = write(STDOUT_FILENO, buffer, r);
if (w == -1)
return (0);
close(fd);
free(buffer);
return (w);
}
