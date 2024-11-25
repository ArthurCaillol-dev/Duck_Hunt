/*
** EPITECH PROJECT, 2020
** m_hunter
** File description:
** fps
*/

#include "../../include/my_hunter.h"

void fps(window_t *window, target_t *duck)
{
    srand(time(NULL));
    duck->initial_pos.y = (rand() % 620);
    window->time = sfClock_getElapsedTime(window->clock_h);
    window->fps = window->time.microseconds / 167000;
    if (window->fps) {
        sfClock_restart(window->clock_h);
        create_anim(duck);
    }
}