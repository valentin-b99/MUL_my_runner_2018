/*
** EPITECH PROJECT, 2018
** struct
** File description:
** struct
*/

#include "../../include/my_runner.h"
#include "../../include/init_struct.h"

void copy_init_structs(all_t *all)
{
    all->pos = init_pos;
    all->vectors = init_vectors;
    all->rects = init_rects;
    all->states = init_states;
    all->scores = init_scores;
    all->map.states_surprise = malloc(sizeof(int) * all->map.nb_surprise);
    for (int i = 0; i < all->map.nb_surprise; i++)
        all->map.states_surprise[i] = 0;
}

void set_textures_rects(all_t *all)
{
    sfSprite_setTextureRect(all->sprites.blck_surprise,
    all->rects.blck_surprise);
    sfSprite_setTextureRect(all->sprites.blck_checkpoint,
    all->rects.blck_checkpoint);
    sfSprite_setTextureRect(all->sprites.blck_end_flag,
    all->rects.blck_end_flag);
    sfSprite_setTextureRect(all->sprites.perso, all->rects.perso);
    sfSprite_setTextureRect(all->sprites.hub_large_btn,
    all->rects.hub_large_btn);
    sfSprite_setTextureRect(all->sprites.hub_med_btn, all->rects.hub_med_btn);
    sfSprite_setTextureRect(all->sprites.hub_small_btn,
    all->rects.hub_small_btn);
}

void create_clocks(all_t *all)
{
    all->clocks.blck_surprise = sfClock_create();
    all->clocks.blck_checkpoint = sfClock_create();
    all->clocks.perso = sfClock_create();
    all->clocks.roulade_perso = sfClock_create();
}

void create_main_structure(all_t *all, char *map)
{
    create_windows(&all->window);
    set_loading_screen(all);
    set_coords_map(all, map);
    copy_init_structs(all);
    create_sprites(all);
    create_texts(all);
    create_sounds(all);
    set_textures_rects(all);
    create_clocks(all);
    all->perso_pixels = sfImage_getPixelsPtr(sfImage_createFromFile(
    SP_PERSO_PATH));
    srand(time(NULL));
}