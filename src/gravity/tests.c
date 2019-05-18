/*
** EPITECH PROJECT, 2018
** tests
** File description:
** tests
*/

#include "../../include/my_runner.h"

int front_perso_is_on_block(all_t *all, coords_t block)
{
    if (block.x * SP_BLOCK_W + all->pos.blocks.x >
        sfSprite_getPosition(all->sprites.perso).x + SP_PERSO_1_W - 20)
        return (0);
    if (sfSprite_getPosition(all->sprites.perso).x + SP_PERSO_1_W - 20 >
        (block.x * SP_BLOCK_W + all->pos.blocks.x) + SP_BLOCK_W)
        return (0);
    return (1);
}

int behind_perso_is_on_block(all_t *all, coords_t block)
{
    if (block.x * SP_BLOCK_W + all->pos.blocks.x >
        sfSprite_getPosition(all->sprites.perso).x + 10)
        return (0);
    if (sfSprite_getPosition(all->sprites.perso).x + 10 >
        (block.x * SP_BLOCK_W + all->pos.blocks.x) + SP_BLOCK_W)
        return (0);
    return (1);
}

int highest_block_perso_foot(all_t *all, coords_t block, int perso_step)
{
    if (block.y * SP_BLOCK_W + 16 < sfSprite_getPosition(all->sprites.perso).y +
        SP_PERSO_1_H)
        return (0);
    if (block.y * SP_BLOCK_W + 16 > perso_step)
        return (0);
    return (1);
}

void test_block_perso(all_t *all, int *perso_step, int nb_block,
coords_t *block)
{
    for (int i = 0; i < nb_block; i++) {
        if (front_perso_is_on_block(all, block[i]) &&
            highest_block_perso_foot(all, block[i], *perso_step)) {
                *perso_step = block[i].y * SP_BLOCK_W + 16;
        }
        if (behind_perso_is_on_block(all, block[i]) &&
            highest_block_perso_foot(all, block[i], *perso_step)) {
                *perso_step = block[i].y * SP_BLOCK_W + 16;
        }
    }
}