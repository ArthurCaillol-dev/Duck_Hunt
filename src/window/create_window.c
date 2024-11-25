/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** gest window
*/

#include "../../include/my_hunter.h"

sfRenderWindow *init_window(window_t *window)
{
    window->video_mode.height = window->h;
    window->video_mode.width = window->w;
    window->video_mode.bitsPerPixel = window->bpp;
    window->hunter = sfRenderWindow_create(window->video_mode, "my_hunter",
    sfDefaultStyle, NULL);
    window->image = sfTexture_createFromFile("assets/i.png", NULL);
    window->window = sfSprite_create();
    sfSprite_setTexture(window->window, window->image, sfFalse);
    sfRenderWindow_setFramerateLimit(window->hunter, window->fps);
    return (window->hunter);
}

window_t *init_strct_window(void)
{
    window_t *window = malloc(sizeof(window_t));

    window->w = 1920;
    window->h = 1080;
    window->bpp = 32;
    window->fps = 60;
    window->hunter = init_window(window);
    window->clock_h = sfClock_create();
    return (window);
}

