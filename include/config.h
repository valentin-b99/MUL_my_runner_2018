/*
** EPITECH PROJECT, 2018
** config
** File description:
** config
*/

#ifndef CONFIG_H_
#define CONFIG_H_

#include "my_runner.h"

/**
*? Commands
*/
#define CMD_HELP "-h" /* help */

/**
*? Terminal Texts
*/
#define ERR_ARG_1 BOLD RED "Bad arguments: "
#define ERR_ARG_2 " given but 1 is required\n" RESET "Retry with -h\n"
#define ERR_CHAR BOLD RED "Error: This file contain not autorized characters.\
\n" RESET
#define ERR_FILE BOLD RED "Error: No such file.\n" RESET
#define ERR_EMPTY_MAP BOLD RED "Error: This file is empty.\n" RESET
#define ERR_END_1 BOLD RED "Error: This map contain "
#define ERR_END_2 " end(s).\n" RESET "A map must have 1 end.\n"
#define ERR_MAP_SIZE_1 BOLD RED "Error: This map size is incorrect (Width: "
#define ERR_MAP_SIZE_2 ", Height: "
#define ERR_MAP_SIZE_3 ").\n" RESET "A map must be 10 blocks high and more \
than 40 blocks wide.\n"
#define MSG_HELP "Finite runner created with CSFML.\n\n" UNDERLINE "USAGE" \
RESET "\n\t./my_runner <map.txt>\n\n" UNDERLINE "OPTIONS" RESET "\n\t-h print \
the usage and quit.\n\n" UNDERLINE "USER INTERACTIONS" RESET "\n\tUP_ARROW_KEY \
jump.\n\tDOWN_ARROW_KEY roulade.\n"

/**
*? Images Folders Paths
*/
#define FLD_IMG_PTH "./img" /* Path for the main folder */
#define FLD_HUD_PTH "HUD" /* Path for the HUD folder */
#define FLD_BG_PTH "bg" /* Path for the background folder */
#define FLD_BLCK_PTH "blocks" /* Path for the blocks folder */

/**
*? Window
*/
#define WIN_WIDTH 1920 /* Window width */
#define WIN_HEIGHT 1020 /* Window height */
#define MAX_FPS 60 /* Window Framerate Limit */
#define WIN_TITLE "Super Mario Runner" /* Window title */
#define WIN_ICON_PATH FLD_IMG_PTH "/favicon.png" /* Size icon 250x250 px */

/**
*? Sprites Paths
*/
#define SP_LOADING_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/loading_screen.png"

#define SP_BG_SKY_PATH FLD_IMG_PTH "/" FLD_BG_PTH "/sky.png"
#define SP_BG_CLOUDS1_PATH FLD_IMG_PTH "/" FLD_BG_PTH "/clouds/clouds1.png"
#define SP_BG_CLOUDS2_PATH FLD_IMG_PTH "/" FLD_BG_PTH "/clouds/clouds2.png"
#define SP_BG_GROUND1_PATH FLD_IMG_PTH "/" FLD_BG_PTH "/grounds/ground1.png"
#define SP_BG_GROUND2_PATH FLD_IMG_PTH "/" FLD_BG_PTH "/grounds/ground2.png"
#define SP_BG_CASTLE_PATH FLD_IMG_PTH "/" FLD_BG_PTH "/castle.png"

#define SP_B_GRASS_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/grass.png"
#define SP_B_GRASS_L_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/grass_left.png"
#define SP_B_GRASS_R_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/grass_right.png"
#define SP_B_GRASS_LR_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/grass_lr.png"
#define SP_B_DIRT_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/dirt.png"
#define SP_B_BRICK_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/brick.png"
#define SP_B_SRPRSE_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/surprise.png"
#define SP_B_TUBE_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/tube.png"
#define SP_B_TTUBE_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/top_tube.png"
#define SP_B_FLOWER_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/carniflower.png"
#define SP_B_COIN_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/coin.png"
#define SP_B_CKPT_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/checkpoint.png"
#define SP_B_EFLAG_PATH FLD_IMG_PTH "/" FLD_BLCK_PTH "/end_flag.png"

#define SP_PERSO_PATH FLD_IMG_PTH "/personnage.png"

#define SP_HUD_COIN_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/coin.png"
#define SP_HUD_MARIO_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/mario.png"
#define SP_HUD_DIST_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/distance.png"
#define SP_HUD_SPEED_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/speed.png"
#define SP_HUD_LBTN_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/large_btn.png"
#define SP_HUD_MBTN_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/medium_btn.png"
#define SP_HUD_SBTN_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/small_btn.png"
#define SP_HUD_MMS_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/loading_screen.png"
#define SP_HUD_MARIO_LOSE_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/mario_fail.png"
#define SP_HUD_MARIO_WIN_PATH FLD_IMG_PTH "/" FLD_HUD_PTH "/mario_win.png"

/**
*? Sprites Size
*/
#define SP_BG_CLOUDS_W 1920 /* Width of clouds for switch */
#define SP_BG_GROUNDS_W 3840 /* Width of grounds for switch */

#define SP_BLOCK_W 100 /* Width of 1 sprite of block */
#define SP_SRPRSE_W 400 /* Total width of sprites of surprise block */
#define SP_CKPT_W 800 /* Total width of sprites of checkpoint block */
#define SP_CKPT_START 300 /* Start of sprites of checkpoint block */
#define SP_EFLAG_1_W 110 /* Width of 1 sprite of end flag block */
#define SP_EFLAG_H 450 /* Total width of sprites of end flag block */
#define SP_PERSO_1_W 126 /* Width of 1 sprite of personnage */
#define SP_PERSO_1_H 154 /* Height of 1 sprite of personnage */
#define SP_PERSO_W 756 /* Total width of sprites of personnage */
#define SP_PERSO_H 552 /* Total height of sprites of personnage */
#define SP_PERSO_ROUL_H 90 /* Height of 1 sprite of personnage when roulade */

/**
*? Sprites Time change
*/
#define SP_SRPRSE_TIME 0.2 /* Time change for surprise block */
#define SP_CKPT_TIME 0.3 /* Time change for checkpoint block */
#define SP_PERSO_TIME 0.15 /* Time change for personnage */
#define TIME_NEXT_ROUL 1.5 /* Time before next roulade */

/**
*? Speed event
*/
#define SPEED_G_PERSO 0.5 /* Speed gravity acceleration of personnage */
#define SPEED_JUMP_PERSO -15 /* Speed jump of personnage */
#define SPEED_ROUL_PERSO 4 /* Speed add when roulade */

/**
*? Stop move for end
*/
#define END_STOP_DECOR 1095 /* Coords before stop decor (end) */
#define END_STOP_PERSO 1400 /* Coords before stop personnage (end) */

/**
*? HUD Texts
*/
#define TXT_HUD_PERC "%"
#define TXT_HUD_MUL "x"
#define TXT_HUD_ADD "+"
#define TXT_HUD_SUB "-"
#define TXT_HUD_LIFES "Lifes:"
#define TXT_HUD_PREV "<"
#define TXT_HUD_NEXT ">"
#define TXT_HUD_SPEED "Speed:"
#define TXT_HUD_PLAY "Play"
#define TXT_HUD_QUIT "Quit"
#define TXT_HUD_MADEBY "Made by Valentin Bonnet - 2018"
#define TXT_HUD_UNIT_SPEED " km/h"
#define TXT_HUD_SPEED_1 "10"
#define TXT_HUD_SPEED_2 "30"
#define TXT_HUD_SPEED_3 "50"
#define TXT_HUD_SPEED_4 "80"
#define TXT_HUD_SPEED_5 "100"

#define TXT_HUD_WIN_PHR "You Win The Game !"
#define TXT_HUD_LOSE_PHR "You Lose The Game..."
#define TXT_HUD_SCORE "Score:"
#define TXT_HUD_COINS "Coins:"
#define TXT_HUD_DISTANCE "Distance:"
#define TXT_HUD_TRYAGAIN "Try Again"

#define TXT_LD_SCREEN "Loading..."

#define TXT_HUD_NB_0_SCORE 7

/**
*? HUD Size Buttons
*/
#define HUD_H_BTN 113 /* Height Button */
#define HUD_W_LBTN 311 /* Width Large Button */
#define HUD_W_MBTN 182 /* Width Medium Button */
#define HUD_W_SBTN 113 /* Width Small Button */

/**
*? Font Path
*/
#define FT_MAIN_PATH "./font/new_super_mario.ttf"

/**
*? Font size
*/
#define FT_SIZE_HUD_MIN 40
#define FT_SIZE_HUD_MAX 50
#define FT_SIZE_HUD_MADEBY 15
#define FT_SIZE_HUD_BIG_BTN 60
#define FT_SIZE_HUD_SML_BTN 30

/**
*? Outline text
*/
#define TXT_STROKE 3

/**
*? Scores
*/
#define END_SCORE 1000
#define COIN_SCORE 100

/**
*? Sounds Paths
*/
#define SD_PATH_FOLDER "./sound"

#define SD_UP_PATH SD_PATH_FOLDER "/1up.wav"
#define SD_BUMP_PATH SD_PATH_FOLDER "/bump.wav"
#define SD_CKPT_PATH SD_PATH_FOLDER "/checkpoint.wav"
#define SD_COIN_PATH SD_PATH_FOLDER "/coin.wav"
#define SD_FAIL_PATH SD_PATH_FOLDER "/fail_map.wav"
#define SD_HEY_PATH SD_PATH_FOLDER "/hey_mario_time.wav"
#define SD_JUMP_PATH SD_PATH_FOLDER "/jump.wav"
#define SD_LETSGO_PATH SD_PATH_FOLDER "/letsgo.wav"
#define SD_MENU_CHOOSE_PATH SD_PATH_FOLDER "/menu_choose.wav"
#define SD_MUSIC_PATH SD_PATH_FOLDER "/music.wav"
#define SD_SEEYS_PATH SD_PATH_FOLDER "/seeyousoon.wav"
#define SD_WIN_PATH SD_PATH_FOLDER "/win_map.wav"
#define SD_YAHOO_PATH SD_PATH_FOLDER "/yahoo.wav"

#endif /* !CONFIG_H_ */