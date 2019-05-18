/*
** EPITECH PROJECT, 2018
** structures
** File description:
** structures
*/

#ifndef STRUCTURES_H_
#define STRUCTURES_H_

typedef struct coords_s
{
    int x;
    int y;
} coords_t;

typedef struct map_s
{
    coords_t size;
    int nb_grass;
    coords_t *grass;
    int nb_dirt;
    coords_t *dirt;
    int nb_brick;
    coords_t *brick;
    int nb_surprise;
    coords_t *surprise;
    int *states_surprise;
    int nb_tube;
    coords_t *tube;
    int nb_flower;
    coords_t *flower;
    int nb_coin;
    coords_t *coin;
    int nb_checkpoint;
    coords_t *checkpoint;
    coords_t end_flag;
} map_t;

typedef struct sprites_s
{
    sfSprite *bg_sky;
    sfSprite *bg_clouds1;
    sfSprite *bg_clouds2;
    sfSprite *bg_ground1;
    sfSprite *bg_ground2;
    sfSprite *bg_castle;
    sfSprite *blck_grass;
    sfSprite *blck_grass_l;
    sfSprite *blck_grass_r;
    sfSprite *blck_grass_lr;
    sfSprite *blck_dirt;
    sfSprite *blck_brick;
    sfSprite *blck_surprise;
    sfSprite *blck_tube;
    sfSprite *blck_ttube;
    sfSprite *blck_flower;
    sfSprite *blck_coin;
    sfSprite *blck_checkpoint;
    sfSprite *blck_end_flag;
    sfSprite *perso;
    sfSprite *hud_coin;
    sfSprite *hud_mario;
    sfSprite *hud_distance;
    sfSprite *hud_speed;
    sfSprite *hub_large_btn;
    sfSprite *hub_med_btn;
    sfSprite *hub_small_btn;
    sfSprite *hub_mmenu_screen;
    sfSprite *hud_emenu_mario;
} sprites_t;

typedef struct positions_s
{
    sfVector2f bg_sky;
    sfVector2f bg_clouds1;
    sfVector2f bg_clouds2;
    sfVector2f bg_ground1;
    sfVector2f bg_ground2;
    sfVector2f bg_castle;
    sfVector2f blocks;
    sfVector2f bk_eflg;
    sfVector2f perso;
    sfVector2f hud_sp_coin;
    sfVector2f hud_sp_mario;
    sfVector2f hud_sp_distance;
    sfVector2f hud_sp_speed;
    sfVector2f hud_txt_coin;
    sfVector2f hud_txt_mario;
    sfVector2f hud_txt_distance;
    sfVector2f hud_txt_speed;
    sfVector2f hud_txt_score;
    sfVector2f hud_mms;
    sfVector2f hud_txt_mm_add;
    sfVector2f hud_txt_mm_sub;
    sfVector2f hud_txt_mm_lifes;
    sfVector2f hud_txt_mm_prev;
    sfVector2f hud_txt_mm_next;
    sfVector2f hud_txt_mm_speed;
    sfVector2f hud_txt_mm_play;
    sfVector2f hud_txt_mm_quit;
    sfVector2f hud_txt_mm_madeby;
    sfVector2f hud_txt_mm_var_lifes;
    sfVector2f hud_txt_mm_var_speed;
    sfVector2f hud_txt_em_phrase;
    sfVector2f hud_txt_em_score;
    sfVector2f hud_txt_em_var_score;
    sfVector2f hud_txt_em_lifes;
    sfVector2f hud_txt_em_var_lifes;
    sfVector2f hud_txt_em_coins;
    sfVector2f hud_txt_em_var_coins;
    sfVector2f hud_txt_em_distance;
    sfVector2f hud_txt_em_var_distance;
    sfVector2f hud_txt_em_speed;
    sfVector2f hud_txt_em_var_speed;
    sfVector2f hud_txt_em_tryagain;
    sfVector2f hud_txt_em_quit;
    sfVector2f hud_sp_em_mario;
} positions_t;

typedef struct vertors_s
{
    sfVector2f clouds1;
    sfVector2f clouds2;
    sfVector2f ground1;
    sfVector2f ground2;
    sfVector2f castle;
    sfVector2f blocks;
    sfVector2f perso;
    sfVector2f perso_end;
} vectors_t;

typedef struct rect_s
{
    sfIntRect blck_surprise;
    sfIntRect blck_checkpoint;
    sfIntRect blck_end_flag;
    sfIntRect perso;
    sfIntRect hub_large_btn;
    sfIntRect hub_med_btn;
    sfIntRect hub_small_btn;
} rect_t;

typedef struct clocks_s
{
    sfClock *blck_surprise;
    sfClock *blck_checkpoint;
    sfClock *perso;
    sfClock *roulade_perso;
} clocks_t;

typedef struct texts_s
{
    sfText *hud_coin;
    sfText *hud_mario;
    sfText *hud_distance;
    sfText *hud_speed;
    sfText *hud_score;
    sfText *txt_loading_screen;
    sfText *hud_mmenu_add;
    sfText *hud_mmenu_sub;
    sfText *hud_mmenu_lifes;
    sfText *hud_mmenu_prev;
    sfText *hud_mmenu_next;
    sfText *hud_mmenu_speed;
    sfText *hud_mmenu_play;
    sfText *hud_mmenu_quit;
    sfText *hud_mmenu_madeby;
    sfText *hud_mmenu_var_lifes;
    sfText *hud_mmenu_var_speed;
    sfText *hud_emenu_phrase;
    sfText *hud_emenu_score;
    sfText *hud_emenu_var_score;
    sfText *hud_emenu_lifes;
    sfText *hud_emenu_var_lifes;
    sfText *hud_emenu_coins;
    sfText *hud_emenu_var_coins;
    sfText *hud_emenu_distance;
    sfText *hud_emenu_var_distance;
    sfText *hud_emenu_speed;
    sfText *hud_emenu_var_speed;
    sfText *hud_emenu_tryagain;
    sfText *hud_emenu_quit;
} texts_t;

typedef struct states_s
{
    int checkpoint;
    int end;
    int win;
    int perso_step;
    int perso_roul;
    int speed;
    float speed_blocks;
    int try_again;
} states_t;

typedef struct scores_s
{
    int life;
    int coin;
    int m_score;
} score_t;

typedef struct sounds_s
{
    sfMusic *up;
    sfMusic *bump;
    sfMusic *checkpoint;
    sfMusic *coin;
    sfMusic *fail_map;
    sfMusic *hey_mt;
    sfMusic *jump;
    sfMusic *letsgo;
    sfMusic *menu_choose;
    sfMusic *music;
    sfMusic *seeysoon;
    sfMusic *win_map;
    sfMusic *yahoo;
} sounds_t;

typedef struct all_s
{
    sfRenderWindow *window;
    sprites_t sprites;
    positions_t pos;
    vectors_t vectors;
    rect_t rects;
    clocks_t clocks;
    texts_t texts;
    map_t map;
    states_t states;
    score_t scores;
    sounds_t sounds;
    const sfUint8 *perso_pixels;
} all_t;

typedef struct counter_map_s
{
    int grass;
    int dirt;
    int brick;
    int surprise;
    int tube;
    int flower;
    int coin;
    int checkpoint;
} counter_map_t;

typedef struct buttons_s
{
    int x;
    int y;
    int hover;
} buttons_t;

typedef struct add_s
{
    int btn_width;
    sfIntRect rect;
} add_t;

typedef struct add_2_s
{
    int btn_width;
    sfVector2f position;
    int i;
    buttons_t *list_coords;
    sfEvent event;
} add_2_t;

#endif /* !STRUCTURES_H_ */