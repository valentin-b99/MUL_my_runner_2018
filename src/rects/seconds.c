/*
** EPITECH PROJECT, 2019
** seconds
** File description:
** seconds
*/

#include "../../include/my_runner.h"

float calc_elapsed_sec(sfClock *clock)
{
    sfTime time;

    time = sfClock_getElapsedTime(clock);
    return (time.microseconds / 1000000.0);
}