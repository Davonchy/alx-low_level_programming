#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: The buffer that stores the data
 * @letters: The numbers of letters it should read.
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0.
 * if filename is NULL return 0.
 * if write fails or does not write the expected amount of bytes,
 * return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, w, r;
char *buf;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);
r = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, r);
free(buf);
close(fd);
return (w);
}
