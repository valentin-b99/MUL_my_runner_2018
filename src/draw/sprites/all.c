/*
** EPITECH PROJECT, 2018
** all
** File description:
** all
*/

#include "../../../include/my_runner.h"

void set_sprite_perso_roul(all_t *all)
{
    if (all->states.perso_roul &&
        sfSprite_getPosition(all->sprites.blck_end_flag).x <= END_STOP_DECOR)
        all->vectors.perso_end.x += SPEED_ROUL_PERSO;
    sfSprite_move(all->sprites.perso, all->vectors.perso_end);
    sfRenderWindow_drawSprite(all->window, all->sprites.perso, NULL);
}

void draw_sprites(all_t *all)
{
    draw_background(all);
    draw_blocks(all);
    draw_hud(all);
    set_sprite_perso_roul(all);
    change_rects(all);
}