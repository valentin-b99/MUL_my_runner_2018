/*
** EPITECH PROJECT, 2019
** errors
** File description:
** errors
*/

#include "../../include/my_runner.h"

int error_end_map(int nb_end_flag)
{
    if (nb_end_flag < 1 || nb_end_flag > 1) {
        my_putstr(ERR_END_1);
        my_putstr(int_to_char(nb_end_flag));
        my_putstr(ERR_END_2);
        return (0);
    }
    return (1);
}

void error_map_size(all_t *all)
{
    my_putstr(ERR_MAP_SIZE_1);
    my_putstr(int_to_char(all->map.size.x));
    my_putstr(ERR_MAP_SIZE_2);
    my_putstr(int_to_char(all->map.size.y));
    my_putstr(ERR_MAP_SIZE_3);
}