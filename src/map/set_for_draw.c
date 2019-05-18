/*
** EPITECH PROJECT, 2018
** set_for_draw
** File description:
** set_for_draw
*/

#include "../../include/my_runner.h"

void set_map_size(all_t *all, char *map)
{
    int nb_col = 0;

    all->map.size.x = 0;
    all->map.size.y = 1;
    for (int i = 0; map[i]; i++) {
        if (map[i] == '\n' && all->map.size.x < nb_col)
            all->map.size.x = nb_col;
        if (map[i] == '\n') {
            all->map.size.y += 1;
            nb_col = 0;
        }
        nb_col++;
    }
}

void set_end_flag_block(all_t *all, coords_t coords)
{
    all->map.end_flag.x = coords.x;
    all->map.end_flag.y = coords.y;
}

void set_coords_block(coords_t *block, int *i_block, coords_t coords)
{
    block[*i_block].x = coords.x;
    block[*i_block].y = coords.y;
    *i_block += 1;
}

void init_set_coords_map(all_t *all, char *map)
{
    set_map_nbr_elems(all, map);
    all->map.grass = malloc(sizeof(coords_t) * (all->map.nb_grass));
    all->map.dirt = malloc(sizeof(coords_t) * (all->map.nb_dirt));
    all->map.brick = malloc(sizeof(coords_t) * (all->map.nb_brick));
    all->map.surprise = malloc(sizeof(coords_t) * (all->map.nb_surprise));
    all->map.tube = malloc(sizeof(coords_t) * (all->map.nb_tube));
    all->map.flower = malloc(sizeof(coords_t) * (all->map.nb_flower));
    all->map.coin = malloc(sizeof(coords_t) * (all->map.nb_coin));
    all->map.checkpoint = malloc(sizeof(coords_t) * (all->map.nb_checkpoint));
}

void set_coords_map(all_t *all, char *map)
{
    coords_t coords = {.x = 0, .y = 0};

    init_set_coords_map(all, map);
    for (int i = 0; map[i]; i++) {
        set_coords_all_blocks(all, map, i, coords);
        coords.x++;
        if (map[i] == '\n') {
            coords.y++;
            coords.x = 0;
        }
    }
}