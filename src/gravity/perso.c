/*
** EPITECH PROJECT, 2018
** perso
** File description:
** perso
*/

#include "../../include/my_runner.h"

void gravity_perso(all_t *all, int perso_step)
{
    if (sfSprite_getPosition(all->sprites.perso).y + SP_PERSO_1_H <
        perso_step && !all->states.perso_roul) {
        if (sfSprite_getPosition(all->sprites.perso).y + SP_PERSO_1_H +
            all->vectors.perso.y > perso_step) {
            all->pos.perso.y = perso_step - SP_PERSO_1_H;
            sfSprite_setPosition(all->sprites.perso, all->pos.perso);
        } else {
            sfSprite_move(all->sprites.perso, all->vectors.perso);
            all->vectors.perso.y += SPEED_G_PERSO;
        }
    } else {
        all->vectors.perso.y = 0;
    }
}