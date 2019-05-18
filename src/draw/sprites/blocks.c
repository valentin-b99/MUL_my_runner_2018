/*
** EPITECH PROJECT, 2018
** blocks
** File description:
** blocks
*/

#include "../../../include/my_runner.h"

void draw_blocks_familly(all_t *all, int nb_block, coords_t *block,
sfSprite *sprite)
{
    sfVector2f position;

    for (int i = 0; i < nb_block; i++) {
        position.x = block[i].x * SP_BLOCK_W + all->pos.blocks.x;
        position.y = block[i].y * SP_BLOCK_W + 16 + all->pos.blocks.y;
        if (block_is_visible(position)) {
            sfSprite_setPosition(sprite, position);
            sfRenderWindow_drawSprite(all->window, sprite, NULL);
        }
    }
}

void reset_checkpoint(all_t *all)
{
    if (all->states.checkpoint >= 0 &&
        all->states.checkpoint + 1 <= all->map.nb_checkpoint &&
        all->map.checkpoint[all->states.checkpoint].x * 100 + all->pos.blocks.x
        <= -SP_BLOCK_W) {
        all->rects.blck_checkpoint.top = 0;
        sfSprite_setTextureRect(all->sprites.blck_checkpoint,
        all->rects.blck_checkpoint);
    }
}

void draw_end_flad_block(all_t *all)
{
    sfVector2f position;

    position.x = all->map.end_flag.x * SP_BLOCK_W + all->pos.blocks.x - 10;
    position.y = all->map.end_flag.y * SP_BLOCK_W + 16 + all->pos.blocks.y -
    (SP_EFLAG_H - SP_BLOCK_W);
    if (block_is_visible(position)) {
        sfSprite_setPosition(all->sprites.blck_end_flag, position);
        sfRenderWindow_drawSprite(all->window, all->sprites.blck_end_flag,
        NULL);
    }
}

void draw_surprises_blocks(all_t *all)
{
    sfVector2f position;
    sfIntRect save_rect = all->rects.blck_surprise;

    for (int i = 0; i < all->map.nb_surprise; i++) {
        if (all->map.states_surprise[i]) {
            all->rects.blck_surprise.top = SP_BLOCK_W;
            all->rects.blck_surprise.left = 0;
        }
        position.x = all->map.surprise[i].x * SP_BLOCK_W + all->pos.blocks.x;
        position.y = all->map.surprise[i].y * SP_BLOCK_W + 16;
        if (block_is_visible(position)) {
            sfSprite_setTextureRect(all->sprites.blck_surprise,
            all->rects.blck_surprise);
            sfSprite_setPosition(all->sprites.blck_surprise, position);
            sfRenderWindow_drawSprite(all->window, all->sprites.blck_surprise,
            NULL);
        }
        all->rects.blck_surprise = save_rect;
    }
}

void draw_blocks(all_t *all)
{
    draw_grass_blocks(all);
    draw_blocks_familly(all, all->map.nb_dirt, all->map.dirt,
    all->sprites.blck_dirt);
    draw_blocks_familly(all, all->map.nb_brick, all->map.brick,
    all->sprites.blck_brick);
    draw_surprises_blocks(all);
    draw_tubes_blocks(all);
    draw_blocks_familly(all, all->map.nb_flower, all->map.flower,
    all->sprites.blck_flower);
    draw_blocks_familly(all, all->map.nb_coin, all->map.coin,
    all->sprites.blck_coin);
    reset_checkpoint(all);
    draw_blocks_familly(all, all->map.nb_checkpoint, all->map.checkpoint,
    all->sprites.blck_checkpoint);
    draw_end_flad_block(all);
    all->pos.blocks.x += all->vectors.blocks.x;
}