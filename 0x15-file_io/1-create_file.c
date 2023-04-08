#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Author Tway
 * Return: 1 on success, -1 on failure
 * The created file must have those permissions: rw-------
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int Tawai_file, status, len;
	mode_t mode;
	struct stat st;

	if (filename == NULL)
		return (-1);
	/* check if file exists using stat function */
	status = stat(filename, &st);
	/**
	 * if file exist gets file's mode using st_mode
	 * field of the stat struture
	 * if file doesn't exist sets mode to S_IRUSR S_IWUSR;
	 * which give me permission to read write
	 */
	if (status == 0)
		mode = st.st_mode;
	else
		mode = S_IRUSR | S_IWUSR;
	/* creates file named Tawai_file */
	Tawai_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (Tawai_file == -1)
		return (-1);
	/* write text_content to the file */
	if (text_content != NULL)
	{
		len = strlen(text_content);
		status = write(Tawai_file, text_content, len);

		if (status == -1)
		{
			close(Tawai_file);
			return (-1);
		}
	}
	close(Tawai_file);
	return (1);
}
