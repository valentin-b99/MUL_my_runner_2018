/*
** EPITECH PROJECT, 2019
** test
** File description:
** tests
*/

#include "../../include/my_runner.h"

int test_can_jump(all_t *all, sfEvent event)
{
    if (event.key.code != sfKeyUp && event.key.code != sfKeySpace)
        return (0);
    if (all->states.win)
        return (0);
    if (sfSprite_getPosition(all->sprites.perso).y + SP_PERSO_1_H !=
        all->states.perso_step)
        return (0);
    if (sfSprite_getPosition(all->sprites.perso).x >=
        sfSprite_getPosition(all->sprites.blck_end_flag).x - 40)
        return (0);
    return (1);
}

int test_can_roul(all_t *all, sfEvent event)
{
    if (event.key.code != sfKeyDown)
        return (0);
    if (all->states.win)
        return (0);
    if (all->states.perso_roul)
        return (0);
    if (calc_elapsed_sec(all->clocks.roulade_perso) <= TIME_NEXT_ROUL)
        return (0);
    if (sfSprite_getPosition(all->sprites.perso).x >=
        sfSprite_getPosition(all->sprites.blck_end_flag).x - 40)
        return (0);
    return (1);
}

int button_is_hover(all_t *all, sfVector2f position, int btn_width, int hover)
{
    if (sfMouse_getPositionRenderWindow(all->window).x < position.x + 5)
        return (0);
    if (sfMouse_getPositionRenderWindow(all->window).x > position.x +
        btn_width - 5)
        return (0);
    if (sfMouse_getPositionRenderWindow(all->window).y < position.y + 5)
        return (0);
    if (sfMouse_getPositionRenderWindow(all->window).y > position.y +
        HUD_H_BTN - 5)
        return (0);
    if (!hover)
        return (0);
    return (1);
}

int test_click(all_t *all, sfEvent event)
{
    if (event.key.code != sfMouseLeft)
        return (0);
    if (event.type != sfEvtMouseButtonPressed)
        return (0);
    return (1);
}