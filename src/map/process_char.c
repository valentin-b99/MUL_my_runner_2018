/*
** EPITECH PROJECT, 2018
** process_char
** File description:
** process_char
*/

#include "../../include/my_runner.h"
#include "../../include/char_list.h"

int test_char(char c)
{
    for (int i = 0; i < 11; i++)
        if (c == char_list[i].form)
            return (1);
    return (0);
}

int test_valid_map(all_t *all, char *str)
{
    int nb_end_flag = 0;

    if (str[0] == 0) {
        my_putstr(ERR_EMPTY_MAP);
        return (0);
    }
    set_map_size(all, str);
    if (all->map.size.x < 40 || all->map.size.y != 10) {
        error_map_size(all);
        return (0);
    }
    for (int i = 0; str[i]; i++) {
        if (!test_char(str[i])) {
            my_putstr(ERR_CHAR);
            return (0);
        }
        if (str[i] == char_list[10].form)
            nb_end_flag++;
    }
    return (error_end_map(nb_end_flag));
}

void set_map_nbr_elems(all_t *all, char *map)
{
    for (int i = 0; map[i]; i++) {
        if (map[i] == char_list[3].form)
            all->map.nb_grass += 1;
        if (map[i] == char_list[2].form)
            all->map.nb_dirt += 1;
        if (map[i] == char_list[4].form)
            all->map.nb_brick += 1;
        if (map[i] == char_list[5].form)
            all->map.nb_surprise += 1;
        if (map[i] == char_list[6].form)
            all->map.nb_tube += 1;
        if (map[i] == char_list[7].form)
            all->map.nb_flower += 1;
        if (map[i] == char_list[8].form)
            all->map.nb_coin += 1;
        if (map[i] == char_list[9].form)
            all->map.nb_checkpoint += 1;
    }
}

void set_coords_all_blocks(all_t *all, char *map, int i, coords_t coords)
{
    static counter_map_t cnt = {0};

    if (map[i] == char_list[3].form)
        set_coords_block(all->map.grass, &cnt.grass, coords);
    if (map[i] == char_list[2].form)
        set_coords_block(all->map.dirt, &cnt.dirt, coords);
    if (map[i] == char_list[4].form)
        set_coords_block(all->map.brick, &cnt.brick, coords);
    if (map[i] == char_list[5].form)
        set_coords_block(all->map.surprise, &cnt.surprise, coords);
    if (map[i] == char_list[6].form)
        set_coords_block(all->map.tube, &cnt.tube, coords);
    if (map[i] == char_list[7].form)
        set_coords_block(all->map.flower, &cnt.flower, coords);
    if (map[i] == char_list[8].form)
        set_coords_block(all->map.coin, &cnt.coin, coords);
    if (map[i] == char_list[9].form)
        set_coords_block(all->map.checkpoint, &cnt.checkpoint, coords);
    if (map[i] == char_list[10].form)
        set_end_flag_block(all, coords);
}