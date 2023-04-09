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
    if (filename == NULL)
    {
        return (-1);
    }
    FILE *file = fopen(filename, "a");
    {
        return (-1);
    }
    
    if (file == NULL)
    {
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));
        return (-1);
    }

    if (text_content != NULL)
    {
        fprintf(file, "%S", text_content);
    }
    fclose(file);
    return (1);
}