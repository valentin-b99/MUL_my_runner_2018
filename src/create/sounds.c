/*
** EPITECH PROJECT, 2019
** sounds
** File description:
** sounds
*/

#include "../../include/my_runner.h"

void create_sounds(all_t *all)
{
    all->sounds.up = sfMusic_createFromFile(SD_UP_PATH);
    all->sounds.bump = sfMusic_createFromFile(SD_BUMP_PATH);
    all->sounds.checkpoint = sfMusic_createFromFile(SD_CKPT_PATH);
    all->sounds.coin = sfMusic_createFromFile(SD_COIN_PATH);
    all->sounds.fail_map = sfMusic_createFromFile(SD_FAIL_PATH);
    all->sounds.hey_mt = sfMusic_createFromFile(SD_HEY_PATH);
    all->sounds.jump = sfMusic_createFromFile(SD_JUMP_PATH);
    all->sounds.letsgo = sfMusic_createFromFile(SD_LETSGO_PATH);
    all->sounds.menu_choose = sfMusic_createFromFile(SD_MENU_CHOOSE_PATH);
    all->sounds.music = sfMusic_createFromFile(SD_MUSIC_PATH);
    all->sounds.seeysoon = sfMusic_createFromFile(SD_SEEYS_PATH);
    all->sounds.win_map = sfMusic_createFromFile(SD_WIN_PATH);
    all->sounds.yahoo = sfMusic_createFromFile(SD_YAHOO_PATH);
    sfMusic_setLoop(all->sounds.music, sfTrue);
    sfMusic_setVolume(all->sounds.music, 20);
    sfMusic_setVolume(all->sounds.win_map, 30);
}