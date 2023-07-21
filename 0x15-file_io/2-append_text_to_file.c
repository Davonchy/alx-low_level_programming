#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to append.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int app;
int index = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (index = 0; text_content[index] != NULL; index++)
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
app = write(fd, text_content, index);
if (app == -1)
return (-1);
close(fd);
return (1);
}
