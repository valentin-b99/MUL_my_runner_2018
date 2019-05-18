/*
** EPITECH PROJECT, 2019
** set_speed
** File description:
** set_speed
*/

#include "../../include/my_runner.h"

void set_speed_2(all_t *all)
{
    all->vectors.clouds1.x -= all->states.speed;
    all->vectors.clouds2.x -= all->states.speed;
    all->vectors.ground1.x -= all->states.speed;
    all->vectors.ground2.x -= all->states.speed;
    all->vectors.castle.x -= all->states.speed;
    all->vectors.blocks.x -= all->states.speed;
    all->states.speed_blocks = all->vectors.blocks.x;
}

void set_speed(all_t *all)
{
    if (all->states.speed == 1)
        sfText_setString(all->texts.hud_speed,
        my_strcat(TXT_HUD_SPEED_1, TXT_HUD_UNIT_SPEED));
    if (all->states.speed == 2)
        sfText_setString(all->texts.hud_speed,
        my_strcat(TXT_HUD_SPEED_2, TXT_HUD_UNIT_SPEED));
    if (all->states.speed == 3)
        sfText_setString(all->texts.hud_speed,
        my_strcat(TXT_HUD_SPEED_3, TXT_HUD_UNIT_SPEED));
    if (all->states.speed == 4)
        sfText_setString(all->texts.hud_speed,
        my_strcat(TXT_HUD_SPEED_4, TXT_HUD_UNIT_SPEED));
    if (all->states.speed == 5)
        sfText_setString(all->texts.hud_speed,
        my_strcat(TXT_HUD_SPEED_5, TXT_HUD_UNIT_SPEED));
    set_speed_2(all);
}