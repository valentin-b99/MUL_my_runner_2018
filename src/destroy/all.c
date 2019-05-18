/*
** EPITECH PROJECT, 2018
** all
** File description:
** all
*/

#include "../../include/my_runner.h"

void destroy_all(all_t *all)
{
    destroy_sprites(all);
    destroy_sprites_hud(all);
    destroy_texts(all);
    destroy_texts_2(all);
    destroy_sounds(all);
    sfRenderWindow_destroy(all->window);
}