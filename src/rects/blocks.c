/*
** EPITECH PROJECT, 2019
** blocks
** File description:
** blocks
*/

#include "../../include/my_runner.h"

void change_blck_surprise_rect(all_t *all)
{
    if (calc_elapsed_sec(all->clocks.blck_surprise) > SP_SRPRSE_TIME) {
        if (all->rects.blck_surprise.left >= SP_SRPRSE_W - SP_BLOCK_W)
            all->rects.blck_surprise.left = 0;
        else
            all->rects.blck_surprise.left += SP_BLOCK_W;
        sfSprite_setTextureRect(all->sprites.blck_surprise,
        all->rects.blck_surprise);
        sfClock_restart(all->clocks.blck_surprise);
    }
}

void change_blck_checkpoint_rect(all_t *all)
{
    if (calc_elapsed_sec(all->clocks.blck_checkpoint) > SP_CKPT_TIME) {
        if (all->rects.blck_checkpoint.left >= SP_CKPT_W - SP_BLOCK_W)
            all->rects.blck_checkpoint.left = SP_CKPT_START;
        else
            all->rects.blck_checkpoint.left += SP_BLOCK_W;
        sfSprite_setTextureRect(all->sprites.blck_checkpoint,
        all->rects.blck_checkpoint);
        sfClock_restart(all->clocks.blck_checkpoint);
    }
}