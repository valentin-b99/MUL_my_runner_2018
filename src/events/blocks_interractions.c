/*
** EPITECH PROJECT, 2019
** blocks_interrections
** File description:
** blocks_interractions
*/

#include "../../include/my_runner.h"

int block_interraction(all_t *all, int nb_block, coords_t *blocks)
{
    for (int i = 0; i < nb_block; i++) {
        if (hit_prim_block(all, blocks[i]) &&
            hit_detail_block(all, blocks[i])) {
            if (all->vectors.perso.y &&
                sfSprite_getPosition(all->sprites.perso).y + SP_PERSO_1_H >
                blocks[i].y * SP_BLOCK_W + SP_BLOCK_W + 16) {
                all->vectors.perso.y = SPEED_G_PERSO * 10;
                sfMusic_play(all->sounds.bump);
                return (0);
            }
            sfMusic_play(all->sounds.fail_map);
            return (1);
        }
    }
    return (0);
}

void coin_block_interraction(all_t *all)
{
    for (int i = 0; i < all->map.nb_coin; i++) {
        if (hit_prim_block(all, all->map.coin[i]) &&
            hit_detail_block(all, all->map.coin[i])) {
            sfMusic_play(all->sounds.coin);
            all->scores.coin += 1;
            all->scores.m_score += COIN_SCORE;
            all->map.coin[i].x = -1;
        }
    }
}

void set_bonus_life(all_t *all)
{
    if (rand() % 5 == 1) {
        all->scores.life += 1;
        sfMusic_play(all->sounds.up);
    }
}

void surprise_block_interraction(all_t *all)
{
    for (int i = 0; i < all->map.nb_surprise; i++) {
        if (hit_prim_block(all, all->map.surprise[i]) &&
            hit_detail_block(all, all->map.surprise[i])) {
            if (all->vectors.perso.y &&
                sfSprite_getPosition(all->sprites.perso).y + SP_PERSO_1_H >
                all->map.surprise[i].y * SP_BLOCK_W + SP_BLOCK_W + 16) {
                all->map.states_surprise[i] = 1;
                all->vectors.perso.y = SPEED_G_PERSO * 10;
                sfMusic_play(all->sounds.bump);
                all->scores.m_score += rand() % 240 + 10;
                set_bonus_life(all);
                return;
            }
            all->states.end = 1;
        }
    }
}

void blocks_interractions(all_t *all)
{
    if (block_interraction(all, all->map.nb_flower, all->map.flower))
        all->states.end = 1;
    if (block_interraction(all, all->map.nb_brick, all->map.brick))
        all->states.end = 1;
    if (block_interraction(all, all->map.nb_dirt, all->map.dirt))
        all->states.end = 1;
    if (block_interraction(all, all->map.nb_grass, all->map.grass))
        all->states.end = 1;
    if (block_interraction(all, all->map.nb_tube, all->map.tube))
        all->states.end = 1;
    surprise_block_interraction(all);
    coin_block_interraction(all);
}