/*
** EPITECH PROJECT, 2019
** end
** File description:
** end
*/

#include "../../include/my_runner.h"

void end_anim(all_t *all)
{
    if (sfSprite_getPosition(all->sprites.perso).x >= END_STOP_PERSO &&
        !all->states.win) {
        all->vectors.perso_end.x = 0;
        all->states.win = 1;
        all->rects.perso.top = SP_PERSO_1_H;
        all->rects.perso.left = 0;
        sfSprite_setTextureRect(all->sprites.perso, all->rects.perso);
    }
}

void end_map_event(all_t *all)
{
    if (sfSprite_getPosition(all->sprites.blck_end_flag).x <= END_STOP_DECOR &&
        !all->states.win) {
        all->vectors.blocks.x = 0;
        all->vectors.clouds1.x = 0;
        all->vectors.clouds2.x = 0;
        all->vectors.ground1.x = 0;
        all->vectors.ground2.x = 0;
        all->vectors.perso_end.x = -all->states.speed_blocks;
    }
    if (sfSprite_getPosition(all->sprites.perso).x >=
        sfSprite_getPosition(all->sprites.blck_end_flag).x) {
        sfMusic_play(all->sounds.win_map);
        all->rects.blck_end_flag.left = SP_EFLAG_1_W;
        sfSprite_setTextureRect(all->sprites.blck_end_flag,
        all->rects.blck_end_flag);
        all->scores.m_score += END_SCORE;
    } end_anim(all);
    if (all->rects.perso.top == SP_PERSO_1_H &&
        all->rects.perso.left == SP_PERSO_W - SP_PERSO_1_W)
        all->states.end = 1;
}
