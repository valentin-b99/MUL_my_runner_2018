/*
** EPITECH PROJECT, 2018
** all
** File description:
** all
*/

#include "../../../include/my_runner.h"

void set_texts(all_t *all)
{
    int percent = (100 - ((all->map.end_flag.x - 11) * SP_BLOCK_W +
    all->pos.blocks.x) / ((all->map.end_flag.x - 11) * SP_BLOCK_W) * 100);
    sfText_setString(all->texts.hud_distance,
    my_strcat(int_to_char(percent), TXT_HUD_PERC));
    sfText_setString(all->texts.hud_mario,
    my_strcat(TXT_HUD_MUL, int_to_char(all->scores.life)));
    sfText_setString(all->texts.hud_coin,
    my_strcat(TXT_HUD_MUL, int_to_char(all->scores.coin)));
    sfText_setString(all->texts.hud_score,
    add_zero(int_to_char(all->scores.m_score), TXT_HUD_NB_0_SCORE));
}

void draw_texts(all_t *all)
{
    sfRenderWindow_drawText(all->window, all->texts.hud_coin, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_mario, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_distance, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_speed, NULL);
    sfRenderWindow_drawText(all->window, all->texts.hud_score, NULL);
    set_texts(all);
}

void set_mm_text_speed(all_t *all)
{
    if (all->states.speed == 1)
        sfText_setString(all->texts.hud_mmenu_var_speed,
        my_strcat(TXT_HUD_SPEED_1, TXT_HUD_UNIT_SPEED));
    if (all->states.speed == 2)
        sfText_setString(all->texts.hud_mmenu_var_speed,
        my_strcat(TXT_HUD_SPEED_2, TXT_HUD_UNIT_SPEED));
    if (all->states.speed == 3)
        sfText_setString(all->texts.hud_mmenu_var_speed,
        my_strcat(TXT_HUD_SPEED_3, TXT_HUD_UNIT_SPEED));
    if (all->states.speed == 4)
        sfText_setString(all->texts.hud_mmenu_var_speed,
        my_strcat(TXT_HUD_SPEED_4, TXT_HUD_UNIT_SPEED));
    if (all->states.speed == 5)
        sfText_setString(all->texts.hud_mmenu_var_speed,
        my_strcat(TXT_HUD_SPEED_5, TXT_HUD_UNIT_SPEED));
}

void set_mm_text_variables(all_t *all)
{
    sfVector2f origin;

    sfText_setString(all->texts.hud_mmenu_var_lifes,
    int_to_char(all->scores.life));
    set_text_origin(all->texts.hud_mmenu_var_lifes);
    set_mm_text_speed(all);
    set_text_origin(all->texts.hud_mmenu_var_speed);
}