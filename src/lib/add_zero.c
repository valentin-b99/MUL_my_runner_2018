/*
** EPITECH PROJECT, 2019
** add_zero
** File description:
** add_zero
*/

#include <stdlib.h>
#include "../../include/my_functions.h"

char *add_zero(char *nb, int len)
{
    char *result = malloc(sizeof(char) * (len - my_strlen(nb)));
    int i = 0;

    while (i < len - my_strlen(nb)) {
        result[i] = '0';
        i++;
    }
    result[i] = 0;
    return (my_strcat(result, nb));
}