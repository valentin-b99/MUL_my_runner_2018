/*
** EPITECH PROJECT, 2018
** char_list
** File description:
** char_list
*/

#ifndef CHAR_VALID_H_
#define CHAR_VALID_H_

typedef struct char_list_s
{
    int id;
    char form;
} char_list_t;

const char_list_t char_list[] =
{
    {0, ' '},
    {1, '\n'},
    {2, 'D'}, /* Dirt */
    {3, 'G'}, /* Grass */
    {4, 'B'}, /* Brick */
    {5, 'S'}, /* Surprise */
    {6, 'T'}, /* Tube */
    {7, 'F'}, /* Flower */
    {8, 'C'}, /* Coin */
    {9, '!'}, /* Checkpoint */
    {10, '|'} /* End Flag */
};

#endif /* !CHAR_VALID_H_ */
