#include "main.h"

#define MAX 1204
#define SE STDERR_FILENO
/**
 * main - displays information contained in ELF header at start of an ELF file.
 * @argc: argument count
 * @args: argument strings
 * Author TWay
 * Return: 0 success
 */
int main(int argc, char *args[])
{
	int input_file, output_file, input, output;
	char buffer[MAX];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input_file = open(args[1], O_RDONLY);

	if (input_file == -1)
		dprintf(SE, "Error: Can't read from file %s\n", args[1]), exit(98);
	output_file = open(args[2], O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (output_file == -1)
		dprintf(SE, "Error: Can't write to %s\n", args[2]), exit(99);

	do {
		input =  read(input_file, buffer, MAX);
		if (input == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", args[1]);
			exit(98);
		}
		if (input > 0)
		{
			output = write(output_file, buffer, (ssize_t) input);
			if (output == -1)
				dprintf(SE, "Error: Can't write to %s\n", args[2]), exit(99);
		}
	} while (input > 0);

	input = close(input_file);
	if (input == -1)
		dprintf(SE, "Error: Can't close file %d\n", input_file), exit(100);
	output = close(output_file);
	if (output == -1)
		dprintf(SE, "Error: Can't close file %d\n", output_file), exit(100);
	return (0);
}

