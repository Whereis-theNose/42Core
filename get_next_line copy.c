#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 22
#endif

char	*read_file(int fd, char *buffer)
{
    int     bytes_read;
    char    *vault;

    if (buffer == NULL)
        buffer = malloc(1);
    vault = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!vault)
        return (NULL);
    while (bytes_read > 0)
    {
        bytes_read = read(fd, vault, BUFFER_SIZE);
        if (bytes_read < 0) // check return for read
        {    
            free(buffer);
            return (NULL);
        }
        vault[bytes_read] = '\0';
        buffer = ft_free(buffer, vault);
        if (strchr(vault, '\n') != NULL)
            break;
    }
    free(buffer);
    return (vault);
}

char *get_line(char *buffer)
{
    char    *line;
    int     length;

    length = 0;
    if (buffer[length] == NULL)
        return (NULL);
    while (buffer[length] != '\n' && buffer[length])
        length++;
    line = malloc((length + 1) * sizeof(char));
    if (!line)
        return (NULL);
    length = 0;
    while (buffer[length] != '\n' && buffer[length])
        line[length] = buffer[length++];
    if (buffer[length] && buffer[length] == '\n')
        line[length] = '\n';
    return (line);
}

char *ft_free(char *buffer, char *newcall)
{
    char    *temp;

    temp = ft_strjoin(buffer, newcall);
    free(buffer);
    return (temp);
}

char    *update_buffer(char *buffer)
{
    char    *new_buffer;
    int     whole;
    int     to_remove;

    whole = 0;
    to_remove = 0; 
    while ((buffer[to_remove] != '\n') && buffer[to_remove])
        to_remove++;
    if (!buffer[to_remove])
    {
        free(buffer);
        return (NULL);
    }
    new_buffer = malloc((ft_strlen(buffer) - to_remove + 1) * sizeof(char));
    if (!new_buffer)    
        retun (NULL);
    while(buffer[to_remove])
    {
        new_buffer[whole] = buffer[to_remove];
        whole++;
        to_remove++;
    }
    new_buffer[] = '\0'; // do we need to append zero terminator?
    free(buffer);
    return (new_buffer);
}   

char    *get_next_line(int fd)
{
    static char *buffer;
    char        *line;

    if (fd < 0 || BUFFER_SIZE < 1)
        return (NULL);
    buffer = read_file(fd, buffer);
    if (!buffer)
        return (NULL);
    line = get_line(buffer);
    buffer = update_buffer(buffer);
    return (line);
}
