/*
** EPITECH PROJECT, 2019
** main_menu_texts
** File description:
** main_menu_texts
*/

#include "../../include/my_runner.h"

void set_origins_mmenu_texts(all_t *all)
{
    sfVector2f origin;

    set_text_origin(all->texts.hud_mmenu_add);
    set_text_origin(all->texts.hud_mmenu_sub);
    set_text_origin(all->texts.hud_mmenu_lifes);
    set_text_origin(all->texts.hud_mmenu_prev);
    set_text_origin(all->texts.hud_mmenu_next);
    set_text_origin(all->texts.hud_mmenu_speed);
    set_text_origin(all->texts.hud_mmenu_play);
    set_text_origin(all->texts.hud_mmenu_quit);
    origin.x = sfText_getLocalBounds(all->texts.hud_mmenu_madeby).width;
    sfText_setOrigin(all->texts.hud_mmenu_madeby, origin);
}

void set_speciality_mmenu_texts(all_t *all)
{
    sfText_setOutlineThickness(all->texts.hud_mmenu_add, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mmenu_sub, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mmenu_lifes, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mmenu_prev, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mmenu_next, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mmenu_speed, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mmenu_play, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mmenu_quit, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mmenu_madeby, TXT_STROKE);
    sfText_setColor(all->texts.hud_mmenu_add, sfYellow);
    sfText_setColor(all->texts.hud_mmenu_sub, sfYellow);
    sfText_setColor(all->texts.hud_mmenu_lifes, sfYellow);
    sfText_setColor(all->texts.hud_mmenu_prev, sfYellow);
    sfText_setColor(all->texts.hud_mmenu_next, sfYellow);
    sfText_setColor(all->texts.hud_mmenu_speed, sfYellow);
    sfText_setColor(all->texts.hud_mmenu_play, sfYellow);
    sfText_setColor(all->texts.hud_mmenu_quit, sfYellow);
    sfText_setColor(all->texts.hud_mmenu_madeby, sfYellow);
    set_origins_mmenu_texts(all);
}

void create_var_texts_mmenu(all_t *all)
{
    all->texts.hud_mmenu_var_lifes = create_text("", FT_SIZE_HUD_MIN,
    all->pos.hud_txt_mm_var_lifes);
    all->texts.hud_mmenu_var_speed = create_text("", FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_mm_var_speed);
    sfText_setOutlineThickness(all->texts.hud_mmenu_var_lifes, TXT_STROKE);
    sfText_setOutlineThickness(all->texts.hud_mmenu_var_speed, TXT_STROKE);
    sfText_setColor(all->texts.hud_mmenu_var_lifes, sfYellow);
    sfText_setColor(all->texts.hud_mmenu_var_speed, sfYellow);
}

void create_mmenu_texts(all_t *all)
{
    all->texts.hud_mmenu_add = create_text(TXT_HUD_ADD, FT_SIZE_HUD_BIG_BTN,
    all->pos.hud_txt_mm_add);
    all->texts.hud_mmenu_sub = create_text(TXT_HUD_SUB, FT_SIZE_HUD_BIG_BTN,
    all->pos.hud_txt_mm_sub);
    all->texts.hud_mmenu_lifes = create_text(TXT_HUD_LIFES, FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_mm_lifes);
    all->texts.hud_mmenu_prev = create_text(TXT_HUD_PREV, FT_SIZE_HUD_BIG_BTN,
    all->pos.hud_txt_mm_prev);
    all->texts.hud_mmenu_next = create_text(TXT_HUD_NEXT, FT_SIZE_HUD_BIG_BTN,
    all->pos.hud_txt_mm_next);
    all->texts.hud_mmenu_speed = create_text(TXT_HUD_SPEED, FT_SIZE_HUD_SML_BTN,
    all->pos.hud_txt_mm_speed);
    all->texts.hud_mmenu_play = create_text(TXT_HUD_PLAY, FT_SIZE_HUD_BIG_BTN,
    all->pos.hud_txt_mm_play);
    all->texts.hud_mmenu_quit = create_text(TXT_HUD_QUIT, FT_SIZE_HUD_BIG_BTN,
    all->pos.hud_txt_mm_quit);
    all->texts.hud_mmenu_madeby = create_text(TXT_HUD_MADEBY,
    FT_SIZE_HUD_MADEBY, all->pos.hud_txt_mm_madeby);
    set_speciality_mmenu_texts(all);
    create_var_texts_mmenu(all);
}