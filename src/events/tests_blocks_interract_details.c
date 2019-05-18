/*
** EPITECH PROJECT, 2019
** tests_blocks_interract_details
** File description:
** tests_blocks_interract_details
*/

#include "../../include/my_runner.h"

int test_pixel(const sfUint8 *pixels, unsigned int x, unsigned int y)
{
    if (x > 0 && x < SP_PERSO_W && y > 0 && y < SP_PERSO_H)
        if (pixels[SP_PERSO_W * y * 4 + x * 4 + 3] > 0)
            return (1);
    return (0);
}

int test_block(all_t *all, coords_t block, int x, int y)
{
    if (x < block.x * SP_BLOCK_W + all->pos.blocks.x)
        return (0);
    if (x > block.x * SP_BLOCK_W + SP_BLOCK_W + all->pos.blocks.x)
        return (0);
    if (y < block.y * SP_BLOCK_W + 17)
        return (0);
    if (y > block.y * SP_BLOCK_W + SP_BLOCK_W + 16)
        return (0);
    return (1);
}

int test_hit_detail_block(all_t *all, int x, int y, coords_t block)
{
    if (!test_block(all, block, sfSprite_getPosition(all->sprites.perso).x +
        (x - all->rects.perso.left), sfSprite_getPosition(all->sprites.perso).y
        + (y - all->rects.perso.top)))
        return (0);
    if (!test_pixel(all->perso_pixels, x, y))
        return (0);
    return (1);
}

int hit_detail_block(all_t *all, coords_t block)
{
    for (int y = all->rects.perso.top;
        y < all->rects.perso.top + all->rects.perso.height; y += 5)
        for (int x = all->rects.perso.left;
            x < all->rects.perso.left + all->rects.perso.width; x += 5)
            if (test_hit_detail_block(all, x, y, block))
                return (1);
    return (0);
}
