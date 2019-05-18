/*
** EPITECH PROJECT, 2019
** tests_blocks_interract_prim
** File description:
** tests_blocks_interract_prim
*/

#include "../../include/my_runner.h"

int hit_block_corner(all_t *all, coords_t block, int add_x, int add_y)
{
    if (sfSprite_getPosition(all->sprites.perso).x + add_x <
        block.x * SP_BLOCK_W + all->pos.blocks.x)
        return (0);
    if (sfSprite_getPosition(all->sprites.perso).x + add_x >
        block.x * SP_BLOCK_W + SP_BLOCK_W + all->pos.blocks.x)
        return (0);
    if (sfSprite_getPosition(all->sprites.perso).y + add_y <
        block.y * SP_BLOCK_W + 17)
        return (0);
    if (sfSprite_getPosition(all->sprites.perso).y + add_y >
        block.y * SP_BLOCK_W + SP_BLOCK_W + 16)
        return (0);
    return (1);
}

int hit_prim_block(all_t *all, coords_t block)
{
    if (hit_block_corner(all, block, 0, 0))
        return (1);
    if (hit_block_corner(all, block, SP_PERSO_1_W, 0))
        return (1);
    if (!all->states.perso_roul) {
        if (hit_block_corner(all, block, 0, SP_PERSO_1_H))
            return (1);
        if (hit_block_corner(all, block, SP_PERSO_1_W, SP_PERSO_1_H))
            return (1);
    } else {
        if (hit_block_corner(all, block, 0, SP_PERSO_ROUL_H))
            return (1);
        if (hit_block_corner(all, block, SP_PERSO_1_W, SP_PERSO_ROUL_H))
            return (1);
    }
    return (0);
}