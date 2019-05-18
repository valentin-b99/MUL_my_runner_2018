/*
** EPITECH PROJECT, 2018
** init_struct.h
** File description:
** init_struct
*/

#ifndef INIT_STRUCT_H_
#define INIT_STRUCT_H_

#include "structures.h"

positions_t init_pos =
{
    {0, 0}, /* Sky */
    {0, 0}, /* Clouds 1 */
    {0, 0}, /* Clouds 2 */
    {0, 0}, /* Ground 1 */
    {0, 0}, /* Ground 2 */
    {800, 550}, /* Castle */
    {0, 0}, /* Blocks */
    {1920, 0}, /* Block End Flag */
    {100, 0}, /* Personnage */
    {20, 170}, /* HUD Sprite Coin */
    {15, 100}, /* HUD Sprite Mario */
    {1400, 20}, /* HUD Sprite Distance */
    {1640, 20}, /* HUD Sprite Speed */
    {40, 170}, /* HUD Text Coin */
    {50, 110}, /* HUD Text Mario */
    {1460, 10}, /* HUD Text Distance */
    {1700, 10}, /* HUD Text Speed */
    {1100, 10}, /* HUD Text Score */
    {0, -60}, /* HUD Main Menu Screen */
    {366, 120}, /* HUD Main Menu Add Button */
    {71, 120}, /* HUD Main Menu Sub Button */
    {219, 125}, /* HUD Main Menu Lifes Button */
    {71, 255}, /* HUD Main Menu Prev Button */
    {366, 255}, /* HUD Main Menu Next Button */
    {219, 255}, /* HUD Main Manu Speed Button */
    {215, 380}, /* HUD Main Menu Play Button */
    {215, 510}, /* HUD Main Menu Quit Button */
    {1920, 990}, /* HUD Main Menu Made By Title */
    {219, 155}, /* HUD Main Menu Variable Lifes Button */
    {219, 290}, /* HUD Main Menu Variable Speed Button */
    {960, 200}, /* HUD End Menu Phrase */
    {960, 410}, /* HUD End Menu Score */
    {960, 435}, /* HUD End Menu Variable Score */
    {1440, 515}, /* HUD End Menu Lifes */
    {1440, 555}, /* HUD End Menu Variable Lifes */
    {1440, 645}, /* HUD End Menu Coins */
    {1440, 685}, /* HUD End Menu Variable Coins */
    {480, 515}, /* HUD End Menu Distance */
    {480, 555}, /* HUD End Menu Variable Distance */
    {480, 645}, /* HUD End Menu Speed */
    {480, 685}, /* HUD End Menu Variable Speed */
    {960, 690}, /* HUD End Menu Try Again */
    {960, 820}, /* HUD End Menu Quit */
    {1450, 890} /* HUD End Menu Mario */
};

vectors_t init_vectors =
{
    {-1.5, 0}, /* Clouds 1 */
    {-1, 0}, /* Clouds 2 */
    {-5, 0}, /* Ground 1 */
    {-4, 0}, /* Ground 2 */
    {-4, 0}, /* Castle */
    {-6.5, 0}, /* Blocks */
    {0, 0}, /* Personnage */
    {0, 0} /* End Personnage */
};

rect_t init_rects =
{
    {0, 0, 100, 100}, /* Block surprise */
    {300, 0, 100, 100}, /* Block checkpoint */
    {0, 0, 110, 450}, /* Block end flag */
    {0, 0, 126, 154}, /* Personnage */
    {0, 0, 311, 113}, /* Large Button */
    {0, 0, 182, 113}, /* Medium Button */
    {0, 0, 113, 113} /* Small Button */
};

states_t init_states =
{
    -1, /* Checkpoint */
    1, /* End */
    0, /* Win */
    0, /* Personnage Step */
    0, /* Personnage Roulade */
    1, /* Personnage Speed */
    0 /* Try Again */
};

score_t init_scores =
{
    1, /* Lifes */
    0, /* Coins */
    0 /* Main Score */
};

#endif /* !INIT_STRUCT_H_ */
