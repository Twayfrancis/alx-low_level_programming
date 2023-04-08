#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: the num of letters it should read and print
 * Author Tway
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int Tawai_file;
	ssize_t letters_read, letters_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	/* open the file Tawai_file*/
	Tawai_file = open(filename, O_RDONLY);

	if (Tawai_file == -1)
		return (0);
	/* allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	/* size is letters mutplied by size of a char */
	if (buffer == NULL)
		return (0);
	/* starts reading the file Tawai_file */
	letters_read = read(Tawai_file, buffer, letters);
	/* reads using sytem call and stores data in the buffer */
	if (letters_read == -1)
	{
		return (0);
	}
	/* write to stdout using the write system call*/
	letters_written = write(STDOUT_FILENO, buffer, letters_read);

	if (letters_written != letters_read)
	{
		return (0);
	}
	/**
	 * finally,function frees the buffer, closes the file and return
	 * the number of bytes read
	 */
	free(buffer);
	close(Tawai_file);
	return (letters_read);
}
