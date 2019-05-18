/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** my_runner
*/

#ifndef MY_RUNNER_H_
#define MY_RUNNER_H_

#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>

#include "my_functions.h"
#include "config.h"
#include "structures.h"

/**
*? Text colors
*/
#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"


/**
*? src/create/end_menu_texts.c
*/
void set_origins_emenu_texts(all_t *);
void set_outlines_emenu_texts(all_t *);
void set_colors_emenu_texts(all_t *);
void create_var_texts_mmenu(all_t *);
void create_emenu_texts(all_t *);

/**
*? src/create/main_menu_texts.c
*/
void set_origins_mmenu_texts(all_t *);
void set_speciality_mmenu_texts(all_t *);
void create_var_texts_mmenu(all_t *);
void create_mmenu_texts(all_t *);

/**
*? src/create/set_text_origin.c
*/
void set_text_origin(sfText *);

/**
*? src/create/sounds.c
*/
void create_sounds(all_t *);

/**
*? src/create/sprites.c
*/
sfSprite *create_sprite(char *, sfVector2f);
void create_sprites(all_t *);

/**
*? src/create/texts.c
*/
sfText *create_text(char *, int, sfVector2f);
void create_game_texts(all_t *);
void create_texts(all_t *);

/**
*? src/create/window.c
*/
void create_windows(sfRenderWindow **);

/**
*? src/destroy/all.c
*/
void destroy_all(all_t *);

/**
*? src/destroy/sounds.c
*/
void destroy_sounds(all_t *);

/**
*? src/destroy/sprites.c
*/
void destroy_sprites(all_t *);
void destroy_sprites_hud(all_t *);

/**
*? src/destroy/texts.c
*/
void destroy_texts(all_t *);
void destroy_texts_2(all_t *);

/**
*? src/draw/sprites/all.c
*/
void set_sprite_perso_roul(all_t *);
void draw_sprites(all_t *);

/**
*? src/draw/sprites/backgrounds.c
*/
void move_paralax(all_t *);
void draw_background(all_t *);

/**
*? src/draw/sprites/blocks.c
*/
void draw_blocks_familly(all_t *, int, coords_t *, sfSprite *);
void reset_checkpoint(all_t *);
void draw_blocks(all_t *);

/**
*? src/draw/sprites/em_buttons.c
*/
void draw_sprites_emenu(all_t *);
void em_click_buttons(all_t *, sfEvent);

/**
*? src/draw/sprites/hud.c
*/
void draw_hud(all_t *);
int button_is_hover(all_t *, sfVector2f, int, int);
void draw_buttons(all_t *, sfSprite *, buttons_t *, add_t);

/**
*? src/draw/sprites/mm_buttons.c
*/
void draw_sprites_mmenu(all_t *);
void click_buttons(all_t *, sfEvent);

/**
*? src/draw/sprites/specials_blocks.c
*/
int test_block_arround(all_t *, coords_t, int);
void draw_specials_grass_blocks(all_t *, sfVector2f, int);
void draw_grass_blocks(all_t *);
int tube_is_top(all_t *, coords_t);
void draw_tubes_blocks(all_t *);

/**
*? src/draw/sprites/tests.c
*/
int block_is_visible(sfVector2f);

/**
*? src/draw/texts/all.c
*/
void set_texts(all_t *);
void draw_texts(all_t *);
void set_mm_text_speed(all_t *);
void set_mm_text_variables(all_t *);

/**
*? src/draw/texts/menus.c
*/
void draw_texts_mmenu(all_t *);
void draw_texts_emenu(all_t *);

/**
*? src/draw/end_circle.c
*/
void set_circle(all_t *, sfCircleShape *, sfVector2f);
void draw_end_circle(all_t *);

/**
*? src/events/all.c
*/
void events_keyboard(all_t *);
void analyse_events(all_t *);
void analyse_events_mmenu(all_t *);
void analyse_events_emenu(all_t *);

/**
*? src/events/buttons_main_menu.c
*/
void event_lifes(all_t *, add_2_t);
void event_speed(all_t *, add_2_t);
void click_small_buttons(all_t *, sfEvent, buttons_t *, int);
void click_large_buttons(all_t *, sfEvent, buttons_t *, int);

/**
*? src/events/blocks_interractions.c
*/
int block_interraction(all_t *, int, coords_t *);
void coin_block_interraction(all_t *);
void set_bonus_life(all_t *);
void surprise_block_interraction(all_t *);
void blocks_interractions(all_t *);

/**
*? src/events/checkpoint.c
*/
void checkpoint_event(all_t *);

/**
*? src/events/end.c
*/
void end_anim(all_t *);
void end_map_event(all_t *);

/**
*? src/events/roulade_perso.c
*/
void roulade_perso_event(all_t *);
void end_roulade_perso_event(all_t *);

/**
*? src/events/tests_blocks_interract_details.c
*/
int test_pixel(const sfUint8 *, unsigned int, unsigned int);
int test_block(all_t *, coords_t, int, int);
int test_hit_detail_block(all_t *, int, int, coords_t);
int hit_detail_block(all_t *, coords_t);

/**
*? src/events/tests_blocks_interract_prim.c
*/
int hit_block_corner(all_t *, coords_t, int, int);
int hit_prim_block(all_t *, coords_t);

/**
*? src/events/tests.c
*/
int test_can_jump(all_t *, sfEvent);
int test_can_roul(all_t *, sfEvent);
int button_is_hover(all_t *, sfVector2f, int, int);
int test_click(all_t *, sfEvent);

/**
*? src/gravity/all.c
*/
void main_gravity(all_t *);

/**
*? src/gravity/perso.c
*/
void gravity_perso(all_t *, int);

/**
*? src/gravity/tests.c
*/
int front_perso_is_on_block(all_t *, coords_t);
int behind_perso_is_on_block(all_t *, coords_t);
int highest_block_perso_foot(all_t *, coords_t, int);
void test_block_perso(all_t *, int *, int, coords_t *);

/**
*? src/initializations/loading_screen.c
*/
void set_loading_screen(all_t *);

/**
*? src/initializations/perso.c
*/
void set_perso_on_floor(all_t *);

/**
*? src/initializations/set_speed.c
*/
void set_speed_2(all_t *);
void set_speed(all_t *);

/**
*? src/initializations/struct.c
*/
void copy_init_structs(all_t *);
void set_textures_rects(all_t *);
void create_clocks(all_t *);
void create_main_structure(all_t *, char *);

/**
*? src/map/errors.c
*/
int error_end_map(int);
void error_map_size(all_t *);

/**
*? src/map/process_char.c
*/
int test_char(char);
int test_valid_map(all_t *, char *);
void set_map_nbr_elems(all_t *, char *);
void set_coords_all_blocks(all_t *, char *, int, coords_t);

/**
*? src/map/read.c
*/
int read_map(char *, char **);
int error_end_map(int);
void error_map_size(all_t *);

/**
*? src/map/set_for_draw.c
*/
void set_map_size(all_t *, char *);
void set_end_flag_block(all_t *, coords_t);
void set_coords_block(coords_t *, int *, coords_t);
void set_coords_map(all_t *, char *);

/**
*? src/rects/all.c
*/
void change_rects(all_t *);

/**
*? src/rects/blocks.c
*/
void change_blck_surprise_rect(all_t *);
void change_blck_checkpoint_rect(all_t *);

/**
*? src/rects/perso.c
*/
void change_normal_perso_rect(all_t *);
void change_roul_perso_rect(all_t *);
void change_perso_rect(all_t *);

/**
*? src/rects/seconds.c
*/
float calc_elapsed_sec(sfClock *);

/**
*? src/main.c
*/
void my_runner(all_t *, char *);

/**
*? src/score.c
*/
void change_score(all_t *);
void set_em_text_variables_2(all_t *);
void set_em_text_variables(all_t *);

#endif /* !MY_RUNNER_H_ */
