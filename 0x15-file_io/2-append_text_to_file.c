#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of the file to write to
 * @text_content: The string to append at the end of the file
 *
 * Return: Always 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, w, index = 0;
if (!filename)
return (-1);
if (text_content != NULL)
{
for (index = 0; text_content[index];)
index++;
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
w = write(fd, text_content, index);
if (w == -1)
return (-1);
close(fd);
return (1);
}
