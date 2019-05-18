/*
** EPITECH PROJECT, 2019
** mm_buttons
** File description:
** mm_buttons
*/

#include "../../../include/my_runner.h"
#include "../../../include/mm_buttons_positions.h"

void draw_sprites_mmenu(all_t *all)
{
    add_t add;

    sfRenderWindow_drawSprite(all->window, all->sprites.hub_mmenu_screen, NULL);
    add.btn_width = HUD_W_LBTN;
    add.rect = all->rects.hub_large_btn;
    draw_buttons(all, all->sprites.hub_large_btn, large_buttons, add);
    add.btn_width = HUD_W_MBTN;
    add.rect = all->rects.hub_med_btn;
    draw_buttons(all, all->sprites.hub_med_btn, medium_buttons, add);
    add.btn_width = HUD_W_SBTN;
    add.rect = all->rects.hub_small_btn;
    draw_buttons(all, all->sprites.hub_small_btn, small_buttons, add);
}

void click_buttons(all_t *all, sfEvent event)
{
    click_small_buttons(all, event, small_buttons, HUD_W_SBTN);
    click_large_buttons(all, event, large_buttons, HUD_W_LBTN);
}