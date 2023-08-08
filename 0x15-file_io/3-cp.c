#include "main.h"

/**
 * create_buffer - allocates 1024 bytes for a buffer.
 * @file: Name of file where char is stored.
 *
 * Return: Pointer to the new buffer.
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - close file descriptor
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
int k;
k = close(fd);
if (k == -1)
{
dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - copies the content of a file to another file.
 * @argc: The numbers of arguments
 * @argv: pointer arrays supplied to the arguments
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is wrong - exit code 97.
 * If file_from doesn't exist or can't be read - exit code 98.
 * If file_to can't be created or written to - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, o, c;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
o = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || o == -1)
{
dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
c = write(to, buffer, o);
if (to == -1 || c == -1)
{
dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
o = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (o > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
