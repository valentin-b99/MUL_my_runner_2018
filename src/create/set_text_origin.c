/*
** EPITECH PROJECT, 2019
** set_text_origin
** File description:
** set_text_origin
*/

#include "../../include/my_runner.h"

void set_text_origin(sfText *text)
{
    sfVector2f origin = {0, 0};

    origin.x = sfText_getLocalBounds(text).width / 2;
    sfText_setOrigin(text, origin);
}