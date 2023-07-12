#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int count;
int mode;
if (filename == NULL)
return(-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (!text_content)
text_content = "";
for (count = 0; text_content[count] != '\0'; count++)
mode = write(fd, text_content, count);
if (mode == -1)
return (-1);
close(fd);
return (1);
}
