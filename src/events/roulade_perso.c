/*
** EPITECH PROJECT, 2019
** roulade_perso
** File description:
** roulade_perso
*/

#include "../../include/my_runner.h"

void roulade_perso_event(all_t *all)
{
    all->states.perso_roul = 1;
    all->rects.perso.top = SP_PERSO_1_H * 3;
    all->rects.perso.left = 0;
    all->rects.perso.height = SP_PERSO_ROUL_H;
    sfSprite_setTextureRect(all->sprites.perso, all->rects.perso);
    sfClock_restart(all->clocks.perso);
    all->vectors.blocks.x -= SPEED_ROUL_PERSO;
    all->vectors.clouds1.x -= SPEED_ROUL_PERSO;
    all->vectors.clouds2.x -= SPEED_ROUL_PERSO;
    all->vectors.ground1.x -= SPEED_ROUL_PERSO;
    all->vectors.ground2.x -= SPEED_ROUL_PERSO;
    all->pos.perso.x = sfSprite_getPosition(all->sprites.perso).x;
    all->pos.perso.y = sfSprite_getPosition(all->sprites.perso).y +
    (SP_PERSO_1_H - SP_PERSO_ROUL_H);
    sfSprite_setPosition(all->sprites.perso, all->pos.perso);
}

void end_roulade_perso_event(all_t *all)
{
    all->rects.perso.left = 0;
    all->rects.perso.top = 0;
    all->rects.perso.height = SP_PERSO_1_H;
    all->states.perso_roul = 0;
    all->vectors.blocks.x += SPEED_ROUL_PERSO;
    all->vectors.clouds1.x += SPEED_ROUL_PERSO;
    all->vectors.clouds2.x += SPEED_ROUL_PERSO;
    all->vectors.ground1.x += SPEED_ROUL_PERSO;
    all->vectors.ground2.x += SPEED_ROUL_PERSO;
    all->pos.perso.x = sfSprite_getPosition(all->sprites.perso).x;
    all->pos.perso.y = sfSprite_getPosition(all->sprites.perso).y -
    (SP_PERSO_1_H - SP_PERSO_ROUL_H);
    sfSprite_setPosition(all->sprites.perso, all->pos.perso);
    sfClock_restart(all->clocks.roulade_perso);
}