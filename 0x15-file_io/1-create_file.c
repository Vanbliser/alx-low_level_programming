#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Description: The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 *
 * Return: 1 on success,
 * -1 on failure (file can not be created, file can not be written, write
 * "fails", etc.)
 */
int create_file(const char *filename, char *text_content)
{



}

