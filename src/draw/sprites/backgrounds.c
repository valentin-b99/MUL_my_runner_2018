/*
** EPITECH PROJECT, 2018
** backgrounds
** File description:
** backgrounds
*/

#include "../../../include/my_runner.h"

void move_paralax(all_t *all)
{
    sfVector2f init_pos = {0, 0};

    if (sfSprite_getPosition(all->sprites.bg_clouds1).x < -SP_BG_CLOUDS_W)
        sfSprite_setPosition(all->sprites.bg_clouds1, init_pos);
    else
        sfSprite_move(all->sprites.bg_clouds1, all->vectors.clouds1);
    if (sfSprite_getPosition(all->sprites.bg_clouds2).x < -SP_BG_CLOUDS_W)
        sfSprite_setPosition(all->sprites.bg_clouds2, init_pos);
    else
        sfSprite_move(all->sprites.bg_clouds2, all->vectors.clouds2);
    if (sfSprite_getPosition(all->sprites.bg_ground1).x < -SP_BG_GROUNDS_W)
        sfSprite_setPosition(all->sprites.bg_ground1, init_pos);
    else
        sfSprite_move(all->sprites.bg_ground1, all->vectors.ground1);
    if (sfSprite_getPosition(all->sprites.bg_ground2).x < -SP_BG_GROUNDS_W)
        sfSprite_setPosition(all->sprites.bg_ground2, init_pos);
    else
        sfSprite_move(all->sprites.bg_ground2, all->vectors.ground2);
}

void draw_background(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->sprites.bg_sky, NULL);
    sfRenderWindow_drawSprite(all->window, all->sprites.bg_castle, NULL);
    sfRenderWindow_drawSprite(all->window, all->sprites.bg_clouds2, NULL);
    sfRenderWindow_drawSprite(all->window, all->sprites.bg_clouds1, NULL);
    sfRenderWindow_drawSprite(all->window, all->sprites.bg_ground2, NULL);
    sfRenderWindow_drawSprite(all->window, all->sprites.bg_ground1, NULL);
    move_paralax(all);
    sfSprite_move(all->sprites.bg_castle, all->vectors.castle);
}