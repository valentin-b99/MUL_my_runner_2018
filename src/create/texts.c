/*
** EPITECH PROJECT, 2018
** texts
** File description:
** texts
*/

#include "../../include/my_runner.h"

sfText *create_text(char *text, int size, sfVector2f position)
{
    sfText *e_text = sfText_create();

    sfText_setString(e_text, text);
    sfText_setFont(e_text, sfFont_createFromFile(FT_MAIN_PATH));
    sfText_setCharacterSize(e_text, size);
    sfText_setPosition(e_text, position);
    return (e_text);
}

void create_game_texts(all_t *all)
{
    all->texts.hud_coin = create_text("", FT_SIZE_HUD_MIN,
    all->pos.hud_txt_coin);
    all->texts.hud_mario = create_text("", FT_SIZE_HUD_MIN,
    all->pos.hud_txt_mario);
    all->texts.hud_distance = create_text("", FT_SIZE_HUD_MAX,
    all->pos.hud_txt_distance);
    all->texts.hud_speed = create_text("", FT_SIZE_HUD_MAX,
    all->pos.hud_txt_speed);
    all->texts.hud_score = create_text("", FT_SIZE_HUD_MAX,
    all->pos.hud_txt_score);
    sfText_setOutlineThickness(all->texts.hud_coin, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mario, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_distance, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_speed, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_score, TXT_STROKE);
}

void create_texts(all_t *all)
{
    create_game_texts(all);
    create_mmenu_texts(all);
    create_emenu_texts(all);
}