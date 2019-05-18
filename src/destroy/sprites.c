/*
** EPITECH PROJECT, 2019
** sprites
** File description:
** sprites
*/

#include "../../include/my_runner.h"

void destroy_sprites(all_t *all)
{
    sfSprite_destroy(all->sprites.bg_sky);
    sfSprite_destroy(all->sprites.bg_clouds1);
    sfSprite_destroy(all->sprites.bg_clouds2);
    sfSprite_destroy(all->sprites.bg_ground1);
    sfSprite_destroy(all->sprites.bg_ground2);
    sfSprite_destroy(all->sprites.bg_castle);
    sfSprite_destroy(all->sprites.blck_grass);
    sfSprite_destroy(all->sprites.blck_grass_l);
    sfSprite_destroy(all->sprites.blck_grass_r);
    sfSprite_destroy(all->sprites.blck_grass_lr);
    sfSprite_destroy(all->sprites.blck_dirt);
    sfSprite_destroy(all->sprites.blck_brick);
    sfSprite_destroy(all->sprites.blck_surprise);
    sfSprite_destroy(all->sprites.blck_tube);
    sfSprite_destroy(all->sprites.blck_ttube);
    sfSprite_destroy(all->sprites.blck_flower);
    sfSprite_destroy(all->sprites.blck_coin);
    sfSprite_destroy(all->sprites.blck_checkpoint);
    sfSprite_destroy(all->sprites.blck_end_flag);
    sfSprite_destroy(all->sprites.perso);
}

void destroy_sprites_hud(all_t *all)
{
    sfSprite_destroy(all->sprites.hud_coin);
    sfSprite_destroy(all->sprites.hud_mario);
    sfSprite_destroy(all->sprites.hud_distance);
    sfSprite_destroy(all->sprites.hud_speed);
    sfSprite_destroy(all->sprites.hub_large_btn);
    sfSprite_destroy(all->sprites.hub_med_btn);
    sfSprite_destroy(all->sprites.hub_small_btn);
    sfSprite_destroy(all->sprites.hub_mmenu_screen);
    sfSprite_destroy(all->sprites.hud_emenu_mario);
}