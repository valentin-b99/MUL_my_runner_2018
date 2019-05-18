/*
** EPITECH PROJECT, 2019
** menus
** File description:
** menus
*/

#include "../../../include/my_runner.h"

void draw_texts_mmenu(all_t *all)
{
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_add, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_sub, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_lifes, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_prev, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_next, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_speed, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_play, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_quit, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_madeby, NULL);
    set_mm_text_variables(all);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_var_lifes, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mmenu_var_speed, NULL);
}

void draw_texts_emenu(all_t *all)
{
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_phrase, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_score, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_var_score, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_lifes, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_var_lifes, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_coins, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_var_coins, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_distance, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_var_distance,
    NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_speed, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_var_speed, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_tryagain, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_emenu_quit, NULL);
}