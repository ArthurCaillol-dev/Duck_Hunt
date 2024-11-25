/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** gest_mouse
*/

#include "../../include/my_hunter.h"

void gest_itbox(window_t *window, target_t *tar, info_t *info)
{
    if (((window->event.mouseButton.x >= tar->pos.x &&
            window->event.mouseButton.x <= (tar->pos.x + SIZE_SPRITE)) &&
            (window->event.mouseButton.y >= tar->pos.y &&
            window->event.mouseButton.y <= (tar->pos.y + SIZE_SPRITE)))) {
            sfSprite_setPosition(tar->sprite, tar->initial_pos);
            touch_target(tar, info);
            }
}