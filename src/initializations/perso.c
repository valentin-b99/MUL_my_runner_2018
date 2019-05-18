/*
** EPITECH PROJECT, 2018
** perso
** File description:
** perso
*/

#include "../../include/my_runner.h"

void set_perso_on_floor(all_t *all)
{
    int perso_step = 2000;

    test_block_perso(all, &perso_step, all->map.nb_grass, all->map.grass);
    test_block_perso(all, &perso_step, all->map.nb_dirt, all->map.dirt);
    test_block_perso(all, &perso_step, all->map.nb_brick, all->map.brick);
    test_block_perso(all, &perso_step, all->map.nb_surprise, all->map.surprise);
    test_block_perso(all, &perso_step, all->map.nb_tube, all->map.tube);
    while (sfSprite_getPosition(all->sprites.perso).y + SP_PERSO_1_H <
        perso_step)
        gravity_perso(all, perso_step);
}