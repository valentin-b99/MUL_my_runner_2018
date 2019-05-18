/*
** EPITECH PROJECT, 2019
** score
** File description:
** score
*/

#include "../include/my_runner.h"

void change_score(all_t *all)
{
    static int advencement = 0;

    if (all->vectors.blocks.x != 0 &&
        all->pos.blocks.x <= advencement - SP_BLOCK_W) {
        advencement = all->pos.blocks.x;
        all->scores.m_score += 5;
    }
}

void set_em_text_variables_2(all_t *all)
{
    sfText_setString(all->texts.hud_emenu_var_coins,
    sfText_getString(all->texts.hud_coin));
    set_text_origin(all->texts.hud_emenu_var_coins);
    sfText_setString(all->texts.hud_emenu_var_distance,
    sfText_getString(all->texts.hud_distance));
    set_text_origin(all->texts.hud_emenu_var_distance);
    sfText_setString(all->texts.hud_emenu_var_speed,
    sfText_getString(all->texts.hud_speed));
    set_text_origin(all->texts.hud_emenu_var_speed);
    if (all->states.win)
        sfSprite_setTexture(all->sprites.hud_emenu_mario,
        sfTexture_createFromFile(SP_HUD_MARIO_WIN_PATH, NULL), sfTrue);
}

void set_em_text_variables(all_t *all)
{
    sfVector2f origin;

    if (all->states.win)
        sfText_setString(all->texts.hud_emenu_phrase, TXT_HUD_WIN_PHR);
    else
        sfText_setString(all->texts.hud_emenu_phrase, TXT_HUD_LOSE_PHR);
    set_text_origin(all->texts.hud_emenu_phrase);
    sfText_setString(all->texts.hud_emenu_var_score,
    sfText_getString(all->texts.hud_score));
    set_text_origin(all->texts.hud_emenu_var_score);
    if (!all->states.win)
        all->scores.life -= 1;
    sfText_setString(all->texts.hud_emenu_var_lifes,
    int_to_char(all->scores.life));
    set_text_origin(all->texts.hud_emenu_var_lifes);
    set_em_text_variables_2(all);
}