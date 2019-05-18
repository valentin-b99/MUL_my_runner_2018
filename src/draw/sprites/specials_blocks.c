/*
** EPITECH PROJECT, 2018
** specials_blocks
** File description:
** specials_blocks
*/

#include "../../../include/my_runner.h"

int test_block_arround(all_t *all, coords_t coords, int dir)
{
    for (int i = 0; i < all->map.nb_grass; i++)
        if (all->map.grass[i].x == coords.x + dir &&
            all->map.grass[i].y == coords.y)
            return (1);
    for (int i = 0; i < all->map.nb_dirt; i++)
        if (all->map.dirt[i].x == coords.x + dir &&
            all->map.dirt[i].y == coords.y)
            return (1);
    for (int i = 0; i < all->map.nb_brick; i++)
        if (all->map.brick[i].x == coords.x + dir &&
            all->map.brick[i].y == coords.y)
            return (1);
    for (int i = 0; i < all->map.nb_surprise; i++)
        if (all->map.surprise[i].x == coords.x + dir &&
            all->map.surprise[i].y == coords.y)
            return (1);
    return (0);
}

void draw_specials_grass_blocks(all_t *all, sfVector2f position, int i)
{
    if (test_block_arround(all, all->map.grass[i], -1)) {
        sfSprite_setPosition(all->sprites.blck_grass_r, position);
        sfRenderWindow_drawSprite(all->window, all->sprites.blck_grass_r, NULL);
    } else if (test_block_arround(all, all->map.grass[i], 1)) {
        sfSprite_setPosition(all->sprites.blck_grass_l, position);
        sfRenderWindow_drawSprite(all->window, all->sprites.blck_grass_l, NULL);
    } else {
        sfSprite_setPosition(all->sprites.blck_grass_lr, position);
        sfRenderWindow_drawSprite(all->window, all->sprites.blck_grass_lr,
        NULL);
    }
}

void draw_grass_blocks(all_t *all)
{
    sfVector2f position;

    for (int i = 0; i < all->map.nb_grass; i++) {
        position.x = all->map.grass[i].x * SP_BLOCK_W + all->pos.blocks.x;
        position.y = all->map.grass[i].y * SP_BLOCK_W + 16 + all->pos.blocks.y;
        if (block_is_visible(position) &&
            test_block_arround(all, all->map.grass[i], -1) &&
            test_block_arround(all, all->map.grass[i], 1)) {
            sfSprite_setPosition(all->sprites.blck_grass, position);
            sfRenderWindow_drawSprite(all->window, all->sprites.blck_grass,
            NULL);
        } else if (block_is_visible(position)) {
            draw_specials_grass_blocks(all, position, i);
        }
    }
}

int tube_is_top(all_t *all, coords_t coords)
{
    for (int i = 0; i < all->map.nb_tube; i++)
        if (all->map.tube[i].x == coords.x &&
            all->map.tube[i].y == coords.y - 1)
            return (0);
    return (1);
}

void draw_tubes_blocks(all_t *all)
{
    sfVector2f position;

    for (int i = 0; i < all->map.nb_tube; i++) {
        position.x = all->map.tube[i].x * SP_BLOCK_W + all->pos.blocks.x;
        position.y = all->map.tube[i].y * SP_BLOCK_W + 16 + all->pos.blocks.y;
        if (block_is_visible(position) &&
            !tube_is_top(all, all->map.tube[i])) {
            sfSprite_setPosition(all->sprites.blck_tube, position);
            sfRenderWindow_drawSprite(all->window, all->sprites.blck_tube,
            NULL);
        } else if (block_is_visible(position) &&
            tube_is_top(all, all->map.tube[i])) {
            sfSprite_setPosition(all->sprites.blck_ttube, position);
            sfRenderWindow_drawSprite(all->window, all->sprites.blck_ttube,
            NULL);
        }
    }
}
