/*
** EPITECH PROJECT, 2018
** all
** File description:
** all
*/

#include "../../include/my_runner.h"

void main_gravity(all_t *all)
{
    all->states.perso_step = 2000;
    if (all->vectors.perso.y >= 0) {
        test_block_perso(all, &all->states.perso_step,
        all->map.nb_grass, all->map.grass);
        test_block_perso(all, &all->states.perso_step,
        all->map.nb_dirt, all->map.dirt);
        test_block_perso(all, &all->states.perso_step,
        all->map.nb_brick, all->map.brick);
        test_block_perso(all, &all->states.perso_step,
        all->map.nb_surprise, all->map.surprise);
        test_block_perso(all, &all->states.perso_step,
        all->map.nb_tube, all->map.tube);
        gravity_perso(all, all->states.perso_step);
    } else {
        sfSprite_move(all->sprites.perso, all->vectors.perso);
        all->vectors.perso.y += SPEED_G_PERSO;
    }
}