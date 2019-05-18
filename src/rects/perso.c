/*
** EPITECH PROJECT, 2019
** perso
** File description:
** perso
*/

#include "../../include/my_runner.h"

void change_normal_perso_rect(all_t *all)
{
    if (sfSprite_getPosition(all->sprites.perso).y + SP_PERSO_1_H <
        all->states.perso_step &&
        sfSprite_getPosition(all->sprites.perso).x < END_STOP_PERSO) {
        all->rects.perso.left = 0;
        all->rects.perso.top = SP_PERSO_1_H * 2;
        sfSprite_setTextureRect(all->sprites.perso, all->rects.perso);
        return;
    } else if (!all->states.win) {
        all->rects.perso.top = 0;
    }
    if (calc_elapsed_sec(all->clocks.perso) > SP_PERSO_TIME) {
        if (all->rects.perso.left >= SP_PERSO_W - SP_PERSO_1_W)
            all->rects.perso.left = 0;
        else
            all->rects.perso.left += SP_PERSO_1_W;
        sfSprite_setTextureRect(all->sprites.perso, all->rects.perso);
        sfClock_restart(all->clocks.perso);
    }
}

void change_roul_perso_rect(all_t *all)
{
    if (calc_elapsed_sec(all->clocks.perso) > SP_PERSO_TIME) {
        if (all->rects.perso.left >= SP_PERSO_1_W * 3) {
            end_roulade_perso_event(all);
        } else {
            all->rects.perso.left += SP_PERSO_1_W;
        }
        sfSprite_setTextureRect(all->sprites.perso, all->rects.perso);
        sfClock_restart(all->clocks.perso);
    }
}

void change_perso_rect(all_t *all)
{
    if (!all->states.perso_roul)
        change_normal_perso_rect(all);
    else
        change_roul_perso_rect(all);
}