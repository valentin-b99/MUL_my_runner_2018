/*
** EPITECH PROJECT, 2019
** tests
** File description:
** tests
*/

#include "../../../include/my_runner.h"

int block_is_visible(sfVector2f position)
{
    if (position.x < -SP_BLOCK_W)
        return (0);
    if (position.x > WIN_WIDTH)
        return (0);
    if (position.y < 0)
        return (0);
    if (position.y > WIN_HEIGHT)
        return (0);
    return (1);
}
