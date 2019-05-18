/*
** EPITECH PROJECT, 2018
** sprites
** File description:
** sprites
*/

#include "../../include/my_runner.h"

sfSprite *create_sprite(char *path, sfVector2f position)
{
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, position);
    return (sprite);
}

void create_backgrounds(all_t *all)
{
    all->sprites.bg_sky = create_sprite(SP_BG_SKY_PATH, all->pos.bg_sky);
    all->sprites.bg_clouds1 = create_sprite(SP_BG_CLOUDS1_PATH,
    all->pos.bg_clouds1);
    all->sprites.bg_clouds2 = create_sprite(SP_BG_CLOUDS2_PATH,
    all->pos.bg_clouds2);
    all->sprites.bg_ground1 = create_sprite(SP_BG_GROUND1_PATH,
    all->pos.bg_ground1);
    all->sprites.bg_ground2 = create_sprite(SP_BG_GROUND2_PATH,
    all->pos.bg_ground2);
    all->sprites.bg_castle = create_sprite(SP_BG_CASTLE_PATH,
    all->pos.bg_castle);
}

void create_blocks(all_t *all)
{
    all->sprites.blck_grass = create_sprite(SP_B_GRASS_PATH, all->pos.blocks);
    all->sprites.blck_grass_l = create_sprite(SP_B_GRASS_L_PATH,
    all->pos.blocks);
    all->sprites.blck_grass_r = create_sprite(SP_B_GRASS_R_PATH,
    all->pos.blocks);
    all->sprites.blck_grass_lr = create_sprite(SP_B_GRASS_LR_PATH,
    all->pos.blocks);
    all->sprites.blck_dirt = create_sprite(SP_B_DIRT_PATH, all->pos.blocks);
    all->sprites.blck_brick = create_sprite(SP_B_BRICK_PATH, all->pos.blocks);
    all->sprites.blck_surprise = create_sprite(SP_B_SRPRSE_PATH,
    all->pos.blocks);
    all->sprites.blck_tube = create_sprite(SP_B_TUBE_PATH, all->pos.blocks);
    all->sprites.blck_ttube = create_sprite(SP_B_TTUBE_PATH, all->pos.blocks);
    all->sprites.blck_flower = create_sprite(SP_B_FLOWER_PATH, all->pos.blocks);
    all->sprites.blck_coin = create_sprite(SP_B_COIN_PATH, all->pos.blocks);
    all->sprites.blck_checkpoint = create_sprite(SP_B_CKPT_PATH,
    all->pos.blocks);
    all->sprites.blck_end_flag = create_sprite(SP_B_EFLAG_PATH,
    all->pos.bk_eflg);
}

void create_hud(all_t *all)
{
    all->sprites.hud_coin = create_sprite(SP_HUD_COIN_PATH,
    all->pos.hud_sp_coin);
    all->sprites.hud_mario = create_sprite(SP_HUD_MARIO_PATH,
    all->pos.hud_sp_mario);
    all->sprites.hud_distance = create_sprite(SP_HUD_DIST_PATH,
    all->pos.hud_sp_distance);
    all->sprites.hud_speed = create_sprite(SP_HUD_SPEED_PATH,
    all->pos.hud_sp_speed);
    all->sprites.hub_large_btn = create_sprite(SP_HUD_LBTN_PATH,
    all->pos.hud_mms);
    all->sprites.hub_med_btn = create_sprite(SP_HUD_MBTN_PATH,
    all->pos.hud_mms);
    all->sprites.hub_small_btn = create_sprite(SP_HUD_SBTN_PATH,
    all->pos.hud_mms);
    all->sprites.hub_mmenu_screen = create_sprite(SP_HUD_MMS_PATH,
    all->pos.hud_mms);
    all->sprites.hud_emenu_mario = create_sprite(SP_HUD_MARIO_LOSE_PATH,
    all->pos.hud_sp_em_mario);
}

void create_sprites(all_t *all)
{
    create_backgrounds(all);
    create_blocks(all);
    all->sprites.perso = create_sprite(SP_PERSO_PATH, all->pos.perso);
    create_hud(all);
}