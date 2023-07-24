#include "main.h"
char *make_buffer(char *file);
void close_file(int fd);

/**
 * make_buffer - sets 1024 bytes for a buffer.
 * @file: The name of the file that buffer is holding it chars.
 *
 * Return: A pointer to the new buffer.
 */
char *make_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
int c;
c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - copies the content of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int from;
int to;
int rea;
int writ;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = make_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rea = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rea == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writ = write(to, buffer, rea);
		if (to == -1 || writ == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rea = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rea > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
