#include "main.h"

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - program that copies the content of a file to another file.
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int input_fd, output_fd, inputstatus, outputstatus;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input_fd = open(av[1], O_RDONLY);
	if (input_fd == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output_fd == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		inputstatus = read(input_fd, buf, MAXSIZE);
		if (inputstatus == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (inputstatus > 0)
		{
			outputstatus = write(output_fd, buf, (ssize_t) inputstatus);
			if (outputstatus == -1)
				dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} while (inputstatus > 0);

	inputstatus = close(input_fd);
	if (inputstatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input_fd), exit(100);
	outputstatus = close(output_fd);
	if (outputstatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", output_fd), exit(100);

	return (0);
}
