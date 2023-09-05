#include "main.h"

/**
 * create_file - that creates a file.
 * @filename: The name of the buffer.
 * @text_content: The content of the file.
 *
 * Return: Always 1 on success, and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, k, index = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
while (text_content && text_content[index])
index++;
k = write(fd, text_content, index);
if (k == -1)
return (-1);
close(fd);
return (1);
}
