/*
** EPITECH PROJECT, 2019
** checkpoint
** File description:
** checkpoint
*/

#include "../../include/my_runner.h"

void checkpoint_event(all_t *all)
{
    if (all->states.checkpoint + 1 < all->map.nb_checkpoint &&
        sfSprite_getPosition(all->sprites.perso).x + SP_PERSO_1_W >=
        all->map.checkpoint[all->states.checkpoint + 1].x * 100 +
        all->pos.blocks.x) {
        all->states.checkpoint += 1;
        sfMusic_play(all->sounds.checkpoint);
        all->rects.blck_checkpoint.top = SP_BLOCK_W;
        all->rects.blck_checkpoint.left = 0;
        sfSprite_setTextureRect(all->sprites.blck_checkpoint,
        all->rects.blck_checkpoint);
    }
}