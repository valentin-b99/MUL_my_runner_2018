/*
** EPITECH PROJECT, 2019
** end_circle.c
** File description:
** end_cirlce
*/

#include "../../include/my_runner.h"

void set_circle(all_t *all, sfCircleShape *circle, sfVector2f pos)
{
    sfCircleShape_setFillColor(circle, sfTransparent);
    sfCircleShape_setOutlineThickness(circle, 1100);
    sfCircleShape_setOutlineColor(circle, sfBlack);
    sfCircleShape_setPosition(circle, pos);
}

void draw_end_circle(all_t *all)
{
    sfCircleShape *circle = sfCircleShape_create();
    sfEvent event;
    int radius = 1100;
    sfVector2f pos = {WIN_WIDTH / 2, WIN_HEIGHT / 2};
    sfVector2f origin;

    set_circle(all, circle, pos);
    while (sfRenderWindow_isOpen(all->window) && radius > 1) {
        analyse_events_mmenu(all);
        sfCircleShape_setRadius(circle, radius);
        origin.x = sfCircleShape_getRadius(circle);
        origin.y = sfCircleShape_getRadius(circle);
        sfCircleShape_setOrigin(circle, origin);
        sfRenderWindow_drawCircleShape(all->window, circle, NULL);
        sfRenderWindow_display(all->window);
        if (radius - 8 < 0)
            radius = 1;
        else
            radius -= 8;
    }
}