/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** sprite
*/

#include "../../include/my_hunter.h"

void gest_anime(target_t *duck)
{
    create_anim(duck);
}

void create_anim(target_t *duck)
{
    duck->duck.left += 110;
    if (duck->duck.left == 330)
        duck->duck.left = 0;
    sfSprite_setTextureRect(duck->sprite, duck->duck);
}