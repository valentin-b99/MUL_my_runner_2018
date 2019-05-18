/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "../include/my_runner.h"

void main_menu(all_t *all)
{
    sfMusic_play(all->sounds.hey_mt);
    sfMusic_play(all->sounds.music);
    while (sfRenderWindow_isOpen(all->window) && all->states.end) {
        analyse_events_mmenu(all);
        draw_sprites_mmenu(all);
        draw_texts_mmenu(all);
        sfRenderWindow_display(all->window);
    }
}

void end_menu(all_t *all)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(all->window) && !all->states.try_again) {
        analyse_events_emenu(all);
        sfRenderWindow_clear(all->window, sfBlack);
        draw_sprites_emenu(all);
        draw_texts_emenu(all);
        sfRenderWindow_display(all->window);
    }
}

void game(all_t *all)
{
    set_perso_on_floor(all);
    set_speed(all);
    while (sfRenderWindow_isOpen(all->window) && !all->states.end) {
        analyse_events(all);
        draw_sprites(all);
        draw_texts(all);
        sfRenderWindow_display(all->window);
        main_gravity(all);
        change_score(all);
    }
}

void my_runner(all_t *all, char *map)
{
    create_main_structure(all, map);
    main_menu(all);
    game(all);
    draw_end_circle(all);
    set_em_text_variables(all);
    end_menu(all);
    destroy_all(all);
}

int main(int ac, char **av)
{
    all_t *all = malloc(sizeof(all_t));
    char *map;

    if (ac < 2 || ac > 2) {
        my_putstr(ERR_ARG_1);
        my_putstr(int_to_char(ac - 1));
        my_putstr(ERR_ARG_2);
        return (84);
    }
    if (ac > 1 && !my_strcmp(av[1], CMD_HELP)) {
        my_putstr(MSG_HELP);
        return (0);
    }
    if (read_map(av[1], &map) == 84 || !test_valid_map(all, map))
        return (84);
    my_runner(all, map);
    free(all);
    return (0);
}