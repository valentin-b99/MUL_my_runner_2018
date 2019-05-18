/*
** EPITECH PROJECT, 2018
** hud
** File description:
** hud
*/

#include "../../../include/my_runner.h"

void draw_hud(all_t *all)
{
    sfRenderWindow_drawSprite(all->window, all->sprites.hud_coin, NULL);
    sfRenderWindow_drawSprite(all->window, all->sprites.hud_distance, NULL);
    sfRenderWindow_drawSprite(all->window, all->sprites.hud_mario, NULL);
    sfRenderWindow_drawSprite(all->window, all->sprites.hud_speed, NULL);
}

void draw_buttons(all_t *all, sfSprite *sprite, buttons_t *list_coords,
add_t add)
{
    sfVector2f position;

    for (int i = 1; i <= list_coords[0].x; i++) {
        position.x = list_coords[i].x;
        position.y = list_coords[i].y;
        if (button_is_hover(all, position, add.btn_width,
            list_coords[i].hover)) {
            add.rect.top = HUD_H_BTN;
            sfSprite_setTextureRect(sprite, add.rect);
            add.rect.top = 0;
        }
        sfSprite_setPosition(sprite, position);
        sfRenderWindow_drawSprite(all->window, sprite, NULL);
        sfSprite_setTextureRect(sprite, add.rect);
    }
}