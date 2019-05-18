/*
** EPITECH PROJECT, 2019
** em_buttons
** File description:
** em_buttons
*/

#include "../../../include/my_runner.h"
#include "../../../include/em_buttons_positions.h"

void draw_sprites_emenu(all_t *all)
{
    add_t add;

    add.btn_width = HUD_W_LBTN;
    add.rect = all->rects.hub_large_btn;
    draw_buttons(all, all->sprites.hub_large_btn, em_large_buttons, add);
    add.btn_width = HUD_W_MBTN;
    add.rect = all->rects.hub_med_btn;
    draw_buttons(all, all->sprites.hub_med_btn, em_medium_buttons, add);
    sfRenderWindow_drawSprite(all->window, all->sprites.hud_emenu_mario, NULL);
}

void em_click_buttons(all_t *all, sfEvent event)
{
    sfVector2f position;

    for (int i = 1; i <= em_large_buttons[0].x; i++) {
        position.x = em_large_buttons[i].x;
        position.y = em_large_buttons[i].y;
        if (i == 2 && button_is_hover(all, position, HUD_W_LBTN,
            em_large_buttons[i].hover) && test_click(all, event)) {
            sfMusic_play(all->sounds.menu_choose);
            all->states.try_again = 1;
        }
        if (i == 3 && button_is_hover(all, position, HUD_W_LBTN,
            em_large_buttons[i].hover) && test_click(all, event)) {
            sfMusic_play(all->sounds.seeysoon);
            sfRenderWindow_close(all->window);
        }
    }
}