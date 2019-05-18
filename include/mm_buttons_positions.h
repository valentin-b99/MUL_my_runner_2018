/*
** EPITECH PROJECT, 2019
** mm_buttons_positions
** File description:
** mm_buttons_positions
*/

#ifndef BUTTONS_POSITIONS_H_
#define BUTTONS_POSITIONS_H_

#include "my_runner.h"

buttons_t large_buttons[] =
{
    {2, 2, 0},
    {60, 370, 1}, /* Play */
    {60, 500, 1} /* Quit */
};

buttons_t medium_buttons[] =
{
    {2, 2, 0},
    {128, 110, 0}, /* Lifes */
    {128, 240, 0} /* Speed */
};

buttons_t small_buttons[] =
{
    {4, 4, 0},
    {15, 110, 1}, /* + */
    {310, 110, 1}, /* - */
    {15, 240, 1}, /* Prev */
    {310, 240, 1} /* Next */
};

#endif /* !BUTTONS_POSITIONS_H_ */
