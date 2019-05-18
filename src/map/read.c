/*
** EPITECH PROJECT, 2018
** read
** File description:
** read
*/

#include "../../include/my_runner.h"

int read_map(char *path, char **buff)
{
    int len;
    int offset = 0;
    int file = open(path, O_RDONLY);
    struct stat st;

    if (file == -1) {
        my_putstr(ERR_FILE);
        return (84);
    }
    stat(path, &st);
    *buff = malloc(sizeof(char) * (st.st_size + 1));
    while ((len = read(file, (*buff) + offset, (st.st_size + 1) - offset)) > 0)
        offset = offset + len;
    (*buff)[offset] = '\0';
    close(file);
    return (0);
}