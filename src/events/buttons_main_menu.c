/*
** EPITECH PROJECT, 2019
** buttons_main_menu
** File description:
** buttons_main_menu
*/

#include "../../include/my_runner.h"

void event_lifes(all_t *all, add_2_t add)
{
    if (add.i == 1 && button_is_hover(all, add.position, add.btn_width,
        add.list_coords[add.i].hover) && test_click(all, add.event) &&
        all->scores.life > 1) {
        sfMusic_play(all->sounds.menu_choose);
        all->scores.life -= 1;
    }
    if (add.i == 2 && button_is_hover(all, add.position, add.btn_width,
        add.list_coords[add.i].hover) && test_click(all, add.event) &&
        all->scores.life < 30) {
        sfMusic_play(all->sounds.menu_choose);
        all->scores.life += 1;
    }
}

void event_speed(all_t *all, add_2_t add)
{
    if (add.i == 3 && button_is_hover(all, add.position, add.btn_width,
        add.list_coords[add.i].hover) && test_click(all, add.event)) {
        sfMusic_play(all->sounds.menu_choose);
        if (all->states.speed == 1)
            all->states.speed = 5;
        else
            all->states.speed -= 1;
    }
    if (add.i == 4 && button_is_hover(all, add.position, add.btn_width,
        add.list_coords[add.i].hover) && test_click(all, add.event)) {
        sfMusic_play(all->sounds.menu_choose);
        if (all->states.speed == 5)
            all->states.speed = 1;
        else
            all->states.speed += 1;
    }
}

void click_small_buttons(all_t *all, sfEvent event, buttons_t *list_coords,
int btn_width)
{
    sfVector2f position;
    add_2_t add = {.btn_width = btn_width, .list_coords = list_coords,
    .event = event};

    for (int i = 1; i <= list_coords[0].x; i++) {
        position.x = list_coords[i].x;
        position.y = list_coords[i].y;
        add.position = position;
        add.i = i;
        event_lifes(all, add);
        event_speed(all, add);
    }
}

void click_large_buttons(all_t *all, sfEvent event, buttons_t *list_coords,
int btn_width)
{
    sfVector2f position;
    add_2_t add = {.btn_width = btn_width, .list_coords = list_coords,
    .event = event};

    for (int i = 1; i <= list_coords[0].x; i++) {
        position.x = list_coords[i].x;
        position.y = list_coords[i].y;
        add.position = position;
        add.i = i;
        if (add.i == 1 && button_is_hover(all, add.position, add.btn_width,
            add.list_coords[add.i].hover) && test_click(all, add.event)) {
            sfMusic_play(all->sounds.letsgo);
            all->states.end = 0;
        }
        if (add.i == 2 && button_is_hover(all, add.position, add.btn_width,
            add.list_coords[add.i].hover) && test_click(all, add.event)) {
            sfMusic_play(all->sounds.menu_choose);
            sfRenderWindow_close(all->window);
        }
    }
}