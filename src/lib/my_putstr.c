/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** my_putstr
*/

#include <unistd.h>
#include "../../include/my_functions.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
    return (0);
}
