/*
** EPITECH PROJECT, 2019
** texts
** File description:
** texts
*/

#include "../../include/my_runner.h"

void destroy_texts(all_t *all)
{
    sfText_destroy(all->texts.hud_coin);
    sfText_destroy(all->texts.hud_mario);
    sfText_destroy(all->texts.hud_distance);
    sfText_destroy(all->texts.hud_speed);
    sfText_destroy(all->texts.hud_score);
    sfText_destroy(all->texts.txt_loading_screen);
    sfText_destroy(all->texts.hud_mmenu_add);
    sfText_destroy(all->texts.hud_mmenu_sub);
    sfText_destroy(all->texts.hud_mmenu_lifes);
    sfText_destroy(all->texts.hud_mmenu_prev);
    sfText_destroy(all->texts.hud_mmenu_next);
    sfText_destroy(all->texts.hud_mmenu_speed);
    sfText_destroy(all->texts.hud_mmenu_play);
    sfText_destroy(all->texts.hud_mmenu_quit);
    sfText_destroy(all->texts.hud_mmenu_madeby);
    sfText_destroy(all->texts.hud_mmenu_var_lifes);
    sfText_destroy(all->texts.hud_mmenu_var_speed);
}

void destroy_texts_2(all_t *all)
{
    sfText_destroy(all->texts.hud_emenu_phrase);
    sfText_destroy(all->texts.hud_emenu_score);
    sfText_destroy(all->texts.hud_emenu_var_score);
    sfText_destroy(all->texts.hud_emenu_lifes);
    sfText_destroy(all->texts.hud_emenu_var_lifes);
    sfText_destroy(all->texts.hud_emenu_coins);
    sfText_destroy(all->texts.hud_emenu_var_coins);
    sfText_destroy(all->texts.hud_emenu_distance);
    sfText_destroy(all->texts.hud_emenu_var_distance);
    sfText_destroy(all->texts.hud_emenu_speed);
    sfText_destroy(all->texts.hud_emenu_var_speed);
    sfText_destroy(all->texts.hud_emenu_tryagain);
    sfText_destroy(all->texts.hud_emenu_quit);
}