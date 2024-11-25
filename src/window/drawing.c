/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** drawing all sprite
*/

#include "../../include/my_hunter.h"

void game_over(info_t *info, window_t *window, target_t *tar)
{
    sfRenderWindow_drawText(window->hunter, info->txt_over, NULL);
}

void after_screen(window_t * window, target_t *tar, info_t *info)
{
    sfSprite_setPosition(tar->sprite, tar->initial_pos);
    info->death--;
    sfText_setString(info->txt_lnb, itoc(info->death));
    if (info->death == 0)
        game_over(info, window, tar);
}

void draw_sprite(window_t *window, target_t *tar, info_t *info)
{
    sfRenderWindow_drawSprite(window->hunter, tar->sprite, NULL);
    sfRenderWindow_drawText(window->hunter, info->txt_lives, NULL);
    sfRenderWindow_drawText(window->hunter, info->txt_lnb, NULL);
    sfRenderWindow_drawText(window->hunter, info->txt_snb, NULL);
    sfRenderWindow_drawText(window->hunter, info->txt_score, NULL);
}

void death(window_t *window, target_t *tar, info_t *info)
{
    info->snbpos.x = (1980 / 38) + 150;
    info->snbpos.y = 400;
    info->spos.x = 1980 / 38;
    info->spos.y = 400;
    sfText_setString(info->txt_score, "Meilleure score");
    sfRenderWindow_drawText(window->hunter, info->txt_over, NULL);
    sfRenderWindow_drawText(window->hunter, info->txt_snb, NULL);
}
