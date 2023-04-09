#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * cp - Copies the content of a file to another file
 * 
 * @file_from: The file to copy from
 * @file_to: The file to copy to
 * 
 * Return: 0 on success, 97 if wrong number of arguments, 98 if can't read from file,
 * 99 if can't write to file, 100 if can't close file descriptor
 */
int cp(char *file_from, char *file_to)
{
    int fd_from, fd_to, bytes_read, bytes_written;
    char buffer[1024];

    // Check for wrong number of arguments
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    // Open file_from
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    // Open file_to
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
        exit(99);
    }

    // Copy content from file_from to file_to
    while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
            exit(99);
        }
    }

    // Close file descriptors
    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}

int main(int argc, char *argv[])
{
    return cp(argv[1], argv[2]);
}