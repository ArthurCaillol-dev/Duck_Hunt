/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** touch_ennemy
*/

#include "../../include/my_hunter.h"

void touch_target(target_t *tar, info_t *info)
{
    info->score += KILL_POINT;
    info->kill++;
    sfText_setString(info->txt_snb, itoc(info->score));
}