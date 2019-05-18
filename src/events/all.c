/*
** EPITECH PROJECT, 2018
** all
** File description:
** all
*/

#include "../../include/my_runner.h"

void events_keyboard(all_t *all)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(all->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(all->window);
        if (test_can_jump(all, event)) {
            sfMusic_play(all->sounds.jump);
            all->vectors.perso.y = SPEED_JUMP_PERSO;
            sfClock_restart(all->clocks.perso);
        }
        if (test_can_roul(all, event)) {
            sfMusic_play(all->sounds.yahoo);
            roulade_perso_event(all);
        }
    }
}

void analyse_events(all_t *all)
{
    events_keyboard(all);
    checkpoint_event(all);
    end_map_event(all);
    blocks_interractions(all);
}

void analyse_events_mmenu(all_t *all)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(all->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(all->window);
        click_buttons(all, event);
    }
}

void analyse_events_emenu(all_t *all)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(all->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(all->window);
        em_click_buttons(all, event);
    }
}