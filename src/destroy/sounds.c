/*
** EPITECH PROJECT, 2019
** sounds
** File description:
** sounds
*/

#include "../../include/my_runner.h"

void destroy_sounds(all_t *all)
{
    sfMusic_destroy(all->sounds.up);
    sfMusic_destroy(all->sounds.bump);
    sfMusic_destroy(all->sounds.checkpoint);
    sfMusic_destroy(all->sounds.coin);
    sfMusic_destroy(all->sounds.fail_map);
    sfMusic_destroy(all->sounds.hey_mt);
    sfMusic_destroy(all->sounds.jump);
    sfMusic_destroy(all->sounds.letsgo);
    sfMusic_destroy(all->sounds.menu_choose);
    sfMusic_destroy(all->sounds.music);
    sfMusic_destroy(all->sounds.seeysoon);
    sfMusic_destroy(all->sounds.win_map);
    sfMusic_destroy(all->sounds.yahoo);
}