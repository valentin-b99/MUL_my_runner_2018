/*
** EPITECH PROJECT, 2019
** end_menu_texts
** File description:
** end_menu_texts
*/

#include "../../include/my_runner.h"

void set_origins_emenu_texts(all_t *all)
{
    sfVector2f origin;

    set_text_origin(all->texts.hud_emenu_phrase);
    set_text_origin(all->texts.hud_emenu_score);
    set_text_origin(all->texts.hud_emenu_var_score);
    set_text_origin(all->texts.hud_emenu_lifes);
    set_text_origin(all->texts.hud_emenu_var_lifes);
    set_text_origin(all->texts.hud_emenu_coins);
    set_text_origin(all->texts.hud_emenu_var_coins);
    set_text_origin(all->texts.hud_emenu_distance);
    set_text_origin(all->texts.hud_emenu_var_distance);
    set_text_origin(all->texts.hud_emenu_speed);
    set_text_origin(all->texts.hud_emenu_var_speed);
    set_text_origin(all->texts.hud_emenu_tryagain);
    set_text_origin(all->texts.hud_emenu_quit);
}

void set_outlines_emenu_texts(all_t *all)
{
    sfText_setOutlineThickness(all->texts.hud_emenu_phrase, TXT_STROKE);
    sfText_setOutlineColor(all->texts.hud_emenu_phrase, sfYellow);
    sfText_setOutlineThickness(all->texts.hud_emenu_score, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_var_score, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_lifes, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_var_lifes, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_coins, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_var_coins, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_distance, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_var_distance, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_speed, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_var_speed, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_tryagain, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_emenu_quit, TXT_STROKE);
}

void set_colors_emenu_texts(all_t *all)
{
    sfText_setColor(all->texts.hud_emenu_phrase, sfRed);
    sfText_setColor(all->texts.hud_emenu_score, sfYellow);
    sfText_setColor(all->texts.hud_emenu_var_score, sfYellow);
    sfText_setColor(all->texts.hud_emenu_lifes, sfYellow);
    sfText_setColor(all->texts.hud_emenu_var_lifes, sfYellow);
    sfText_setColor(all->texts.hud_emenu_coins, sfYellow);
    sfText_setColor(all->texts.hud_emenu_var_coins, sfYellow);
    sfText_setColor(all->texts.hud_emenu_distance, sfYellow);
    sfText_setColor(all->texts.hud_emenu_var_distance, sfYellow);
    sfText_setColor(all->texts.hud_emenu_speed, sfYellow);
    sfText_setColor(all->texts.hud_emenu_var_speed, sfYellow);
    sfText_setColor(all->texts.hud_emenu_tryagain, sfYellow);
    sfText_setColor(all->texts.hud_emenu_quit, sfYellow);
}

void create_var_texts_emenu(all_t *all)
{
    all->texts.hud_emenu_var_score = create_text("", FT_SIZE_HUD_MAX,
    all->pos.hud_txt_em_var_score);
    all->texts.hud_emenu_var_lifes = create_text("", FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_em_var_lifes);
    all->texts.hud_emenu_var_coins = create_text("", FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_em_var_coins);
    all->texts.hud_emenu_var_distance = create_text("", FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_em_var_distance);
    all->texts.hud_emenu_var_speed = create_text("", FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_em_var_speed);
}

void create_emenu_texts(all_t *all)
{
    all->texts.hud_emenu_phrase = create_text("", FT_SIZE_HUD_BIG_BTN,
    all->pos.hud_txt_em_phrase);
    all->texts.hud_emenu_score = create_text(TXT_HUD_SCORE, FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_em_score);
    all->texts.hud_emenu_lifes = create_text(TXT_HUD_LIFES, FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_em_lifes);
    all->texts.hud_emenu_coins = create_text(TXT_HUD_COINS, FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_em_coins);
    all->texts.hud_emenu_distance = create_text(TXT_HUD_DISTANCE,
    FT_SIZE_HUD_SML_BTN, all->pos.hud_txt_em_distance);
    all->texts.hud_emenu_speed = create_text(TXT_HUD_SPEED, FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_em_speed);
    all->texts.hud_emenu_tryagain = create_text(TXT_HUD_TRYAGAIN,
    FT_SIZE_HUD_MAX, all->pos.hud_txt_em_tryagain);
    all->texts.hud_emenu_quit = create_text(TXT_HUD_QUIT, FT_SIZE_HUD_MAX,
    all->pos.hud_txt_em_quit);
    create_var_texts_emenu(all);
    set_outlines_emenu_texts(all);
    set_colors_emenu_texts(all);
    set_origins_emenu_texts(all);
}