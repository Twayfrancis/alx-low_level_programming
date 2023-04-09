#include "main.h"
/**
 * append_text_to_file- appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Author Tway
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int Tawai_file, status, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	Tawai_file = open(filename, O_APPEND | O_WRONLY);

	if (Tawai_file == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(Tawai_file, text_content, i);

	if (status == -1)
		return (-1);

	close(Tawai_file);
	return (1);
}
