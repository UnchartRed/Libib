/*
** EPITECH PROJECT, 2021
** ib_read_file
** File description:
** reads and returns a file content
*/

#include "../includes/ib.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

size_t ib_get_fd_size(FILE *file)
{
    ssize_t read;
    size_t size = 0;
    size_t len = 0;
    char *line = NULL;

    while ((read = getline(&line, &len, file)) != -1)
        size += (ib_strlen(line) + 1);
    free(line);
    return (size);
}

char *ib_get_fd_buff(int fd, size_t size)
{
    ssize_t offset = 0;
    ssize_t len = 0;
    char *buff = malloc(sizeof(char) * (size + 1));

    while ((len = read(fd , buff + offset ,  size - offset)) > 0)
        offset += len;
    if (offset == 0) {
        free(buff);
        return (NULL);
    }
    buff[offset] = '\0';
    return (buff);
}

char **ib_read_fd(FILE *file, char const *path)
{
    int fd = open(path, O_RDONLY);
    size_t size = ib_get_fd_size(file);
    char *tmp = ib_get_fd_buff(fd, size);
    char **buff = ib_str_to_arr(tmp, "\n");

    free(tmp);
    close(fd);
    return (buff);
}
