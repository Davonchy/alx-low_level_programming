#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The file name
 * @letters: The text to read and write.
 * 
 * Return: the actual number of letters it could read
 * and print
 * else return 0 - if the file can not be opened or read,
 * or filename is NULL, or write fails
 * or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t n_In;
ssize_t n_Out;
int fd;
char *nptr;
if (filename == NULL)
return (0);
nptr = malloc(letters * sizeof(char));
if (nptr == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return(0);
n_In = read(fd, nptr, letters);
if (n_In == -1)
return (0);
n_Out = write(STDOUT_FILENO, nptr, n_In);
if (n_Out != n_In)
return (0);
close(fd);
free(nptr);
return (n_In);
}
