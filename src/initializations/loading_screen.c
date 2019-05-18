/*
** EPITECH PROJECT, 2019
** loading_screen
** File description:
** loading_screen
*/

#include "../../include/my_runner.h"

void set_loading_screen(all_t *all)
{
    sfVector2f sp_pos = {0, -60};
    sfVector2f txt_pos = {55, 900};
    sfSprite *loading_sprite = create_sprite(SP_LOADING_PATH, sp_pos);
    sfText *loading_txt = create_text(TXT_LD_SCREEN, FT_SIZE_HUD_MAX, txt_pos);

    sfText_setOutlineThickness(loading_txt, TXT_STROKE);
    sfRenderWindow_drawSprite(all->window, loading_sprite, NULL);
    sfRenderWindow_drawText(all->window, loading_txt, NULL);
    sfRenderWindow_display(all->window);
}
